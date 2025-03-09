// CHAPTER 10 – FILE I/O
// The random-access memory is volatile, and its content is lost once the program
// terminates. In order to persist the data forever we use files.
// A file is data stored in a storage device.
// A C program can talk to the file by reading content from it and writing content to it.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr;
    int num;
    char ch;

    // FILE POINTER
    // A "FILE" is a structure which needs to be created for opening the file.
    // A file pointer is a pointer to this structure of the file.
    ptr = fopen("filename.txt", "r");
    if (ptr == NULL) {
        printf("File does not exist!\n");
        return 1;
    }

    // FILE OPENING MODES IN C
    // "r"  -> open for reading
    // "rb" -> open for reading in binary
    // "w"  -> open for writing (overwrites file if it exists)
    // "wb" -> open for writing in binary
    // "a"  -> open for append (creates file if it does not exist)
    
    // TYPES OF FILES
    // 1. Text files (.txt, .c)
    // 2. Binary files (.jpg, .dat)

    // READING A FILE
    fscanf(ptr, "%d", &num); // fscanf is the file counterpart of scanf
    printf("The number in file is: %d\n", num);
    fclose(ptr); // Always close the file

    // WRITING TO A FILE
    FILE *fptr;
    fptr = fopen("sohan.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    // FGETC() AND FPUTC()
    ptr = fopen("sohan.txt", "r");
    if (ptr == NULL) {
        printf("File does not exist!\n");
        return 1;
    }
    
    while (1) {
        ch = fgetc(ptr); // Read a character from the file
        if (ch == EOF) { // Check for end of file
            break;
        }
        putchar(ch); // Print the character
    }
    fclose(ptr);

    return 0;
}
