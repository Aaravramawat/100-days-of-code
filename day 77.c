#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL) {
        printf("Input file not found!");
        return 0;
    }

    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL) {
        printf("Cannot create output file!");
        fclose(fp1);
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper((unsigned char)ch), fp2);
    }

    printf("Conversion completed successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}