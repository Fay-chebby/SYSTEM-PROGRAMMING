#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char buffer[256];
    char data[] = "This is an example of file handling in C.\n";

    // Opening a file in write mode ("w" - write mode)
    // If the file does not exist, it will be created
    // If the file exists, its contents will be overwritten
    file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s for writing.\n", filename);
        return 1;
    }

    // Writing data to the file
    // fputs writes a string to the file
    if (fputs(data, file) == EOF) {
        fprintf(stderr, "Error writing to file %s.\n", filename);
        fclose(file);
        return 1;
    }

    // Closing the file after writing
    fclose(file);

    // Opening the file in read mode ("r" - read mode)
    // The file must exist for this mode to work
    file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s for reading.\n", filename);
        return 1;
    }

    // Reading from the file
    // fgets reads a line from the file into the buffer
    printf("Contents of the file %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Closing the file after reading
    fclose(file);

    // Opening the file in append mode ("a" - append mode)
    // If the file does not exist, it will be created
    // If the file exists, data will be added to the end of the file
    file = fopen(filename, "a");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s for appending.\n", filename);
        return 1;
    }

    // Appending data to the file
    if (fputs("Appending this line to the file.\n", file) == EOF) {
        fprintf(stderr, "Error appending to file %s.\n", filename);
        fclose(file);
        return 1;
    }

    // Closing the file after appending
    fclose(file);

    // Reopening the file in read mode to display the appended content
    file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s for reading.\n", filename);
        return 1;
    }

    // Reading the file again to see the appended content
    printf("\nContents of the file %s after appending:\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Closing the file after reading the appended content
    fclose(file);

    // Deleting the file
    // The remove function deletes the specified file
    if (remove(filename) != 0) {
        fprintf(stderr, "Error deleting file %s.\n", filename);
        return 1;
    } else {
        printf("\nFile %s successfully deleted.\n", filename);
    }

    return 0;
}

