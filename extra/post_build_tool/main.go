package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Please provide a filename")
		return
	}

	filename := os.Args[1]
	debug := 0
	linked := 0

	if len(os.Args) >= 3 {
		if os.Args[2] == "debug" {
			debug = 1
		}
		if os.Args[2] == "linked" {
			linked = 1
		}
	}

	// Read the file content
	content, err := os.ReadFile(filename)
	if err != nil {
		fmt.Printf("Error reading file: %v\n", err)
		return
	}

	// Get the length of the file content
	length := len(content)

	// Create a new filename for the copy
	newFilename := filename + ".dfu"

	// Create the new content with the length in front
	len_str := fmt.Sprintf("%d", length)
	newContent := append([]byte(len_str), 0, byte(debug), byte(linked))
	// make newContent 16 bytes
	tmp := make([]byte, 16-len(newContent))
	newContent = append(newContent, tmp...)
	newContent = append(newContent, content...)

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

	fmt.Printf("File copied and saved as %s\n", newFilename)
}
