#!/bin/bash

if [ ! -f platform.txt ]; then
  echo Launch this script from the root core folder as ./extra/bootstrap.sh
  exit 2
fi

NEEDED_HALS=$(grep 'build.zephyr_hals=' boards.txt | cut -d '=' -f 2 | xargs -n 1 echo | sort -u)

HAL_FILTER="-hal_.*"
for hal in $NEEDED_HALS; do
  HAL_FILTER="$HAL_FILTER,+$hal"
done

python3 -m venv venv
source venv/bin/activate
pip install west protobuf grpcio-tools
west init -l .
west config manifest.project-filter -- "$HAL_FILTER"
west update "$@"
west zephyr-export
pip install -r ../zephyr/scripts/requirements-base.txt
west sdk install --version 0.17.0 -t arm-zephyr-eabi
west blobs fetch $NEEDED_HALS
