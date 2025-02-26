package main

import (
	"flag"
	"fmt"
	"os"
)

func main() {
	var output = flag.String("output", "", "Output to a specific file (default: add .dfu suffix)")
	var debug = flag.Bool("debug", false, "Enable debugging mode")
	var linked = flag.Bool("prelinked", false, "Provided file has already been linked to Zephyr")

	flag.Parse()
	if flag.NArg() != 1 {
		fmt.Printf("Usage: %s [flags] <filename>\n", os.Args[0])
		flag.PrintDefaults()
		return
	}
	filename := flag.Arg(0)

	// Read the file content
	content, err := os.ReadFile(filename)
	if err != nil {
		fmt.Printf("Error reading file: %v\n", err)
		return
	}

	// Get the length of the file content
	length := len(content)

	// Create the new content with the length in front
	len_str := fmt.Sprintf("%d", length)
	newContent := append([]byte(len_str), 0, byte(*debug), byte(*linked))
	// make newContent 16 bytes
	tmp := make([]byte, 16-len(newContent))
	newContent = append(newContent, tmp...)
	newContent = append(newContent, content...)

	// Create a new filename for the copy
	newFilename := *output
	if newFilename == "" {
		newFilename = filename + ".dfu"
	}

	// Write the new content to the new file
	err = os.WriteFile(newFilename, []byte(newContent), 0644)
	if err != nil {
		fmt.Printf("Error writing to file: %v\n", err)
		return
	}
	// Copy in .bin
	err = os.WriteFile(newFilename+".bin", []byte(newContent), 0644)
	if err != nil {
		fmt.Printf("Error writing to file: %v\n", err)
		return
	}

	fmt.Printf("File %s saved as %s\n", filename, newFilename)
}
