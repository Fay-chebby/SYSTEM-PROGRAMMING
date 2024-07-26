#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    int data[] = {10, 20, 30, 40};

    // Write to a binary file
    fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fwrite(data, sizeof(int), 4, fp);

    // Close the file
    fclose(fp);

    // Read from the binary file
    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int read_data[4];
    fread(read_data, sizeof(int), 4, fp);

    // Print the read data
    for (int i = 0; i < 4; i++) {
        printf("%d ", read_data[i]);
    }
    printf("\n");

    // Close the file
    fclose(fp);

    // Demonstrate fseek
    fp = fopen("data.bin", "rb+");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Seek to the beginning of the file
    fseek(fp, 0, SEEK_SET);

    int new_data = 50;
    fwrite(&new_data, sizeof(int), 1, fp);

    // Close the file
    fclose(fp);

    return 0;
}

