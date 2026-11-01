#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {

        if (isalpha((unsigned char)ch)) {

            ch = tolower((unsigned char)ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    fclose(fp);

    return 0;
}