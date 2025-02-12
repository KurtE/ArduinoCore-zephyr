if [ x$ZEPHYR_SDK_INSTALL_DIR == x"" ]; then
export ZEPHYR_SDK_INSTALL_DIR=/ssd/zephyr-sdk-0.16.8/
fi

set -e

board=$1
variant=$2
third_arg=$3
extra_args=""

if [[ $# -eq 0 ]]; then
board=arduino_giga_r1//m7
variant=arduino_giga_r1_m7
fi

source venv/bin/activate

if [ "$third_arg" != "" ]; then
    extra_args="--shield $shield"
fi

(west build loader -b $board -p $extra_args && west build -t llext-edk)
(tar xfp build/zephyr/llext-edk.tar.xz --directory variants/$variant/)

(cp build/zephyr/zephyr.elf firmwares/zephyr-$variant.elf)
if [ -f build/zephyr/zephyr.bin ]; then
    cp build/zephyr/zephyr.bin firmwares/zephyr-$variant.bin
elif [ -f build/zephyr/zephyr.hex ]; then
    cp build/zephyr/zephyr.hex firmwares/zephyr-$variant.hex
fi

# Generate the provides.ld file for linked builds
echo "Exporting provides.ld"
arm-none-eabi-readelf --wide -s build/zephyr/zephyr.elf  | c++filt  | grep FUNC | awk -F' ' '{print "PROVIDE("$8" = 0x"$2");"}' > variants/$variant/provides.ld
arm-none-eabi-readelf --wide -s build/zephyr/zephyr.elf  | c++filt  | grep llext_stack | awk -F' ' '{print "PROVIDE("$8" = 0x"$2");"}' >> variants/$variant/provides.ld
arm-none-eabi-readelf --wide -s build/zephyr/zephyr.elf  | c++filt  | grep llext_stack | awk -F' ' '{print "PROVIDE(llext_stack_size = "$3");"}' >> variants/$variant/provides.ld
cat build/zephyr/zephyr.map | grep __device_dts_ord | grep -v rodata | grep -v llext_const_symbol |  awk -F' ' '{print "PROVIDE("$2" = "$1");"}'  >> variants/$variant/provides.ld
TEXT_START=`cat loader/boards/$variant.overlay | grep user_sketch: | cut -f2 -d"@" | cut -f1 -d"{"`
echo "PROVIDE(_sketch_start = 0x$TEXT_START);" >> variants/$variant/provides.ld
