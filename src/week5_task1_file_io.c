// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];

    // 1. Open file for writing (mode = "w")
    fp = fopen(filename, "w");
    // 2. Check if file opened successfully

    if (fp == NULL){
        printf("Error: Could not open the file for writing.\n");
        return 1;
    }
    printf("Writing to %s...\n", filename);
    
    // 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "Hello, file I/O in C!\n");
    fprintf(fp, "This is another line.\n");

    // 4. Close the file
    fclose(fp);

    // 5. Open file again for reading (mode = "r")
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Error: Could not open the file for reading.\n");
        return 1;
    }
    printf("Reading file:\n");

    // 6. Use fgets() in a loop to read and print each line to the console
    while (fgets(line, sizeof(line), fp) != NULL){
        printf("%s", line);
    }
    
    // 7. Close the file
    fclose(fp);

    // BONUS: ask user for filename instead of using default "data.txt"
    // BONUS: count number of lines read

    return 0;
}
