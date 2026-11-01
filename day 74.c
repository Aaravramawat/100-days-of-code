#include <stdio.h>

int main() {
    FILE *source, *destination;
    char file1[100], file2[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", file1);

    printf("Enter destination filename: ");
    scanf("%s", file2);

    source = fopen(file1, "r");

    if (source == NULL) {
        printf("Source file does not exist!");
        return 0;
    }

    destination = fopen(file2, "w");

    if (destination == NULL) {
        printf("Cannot create destination file!");
        fclose(source);
        return 0;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully!");

    fclose(source);
    fclose(destination);

    return 0;
} 