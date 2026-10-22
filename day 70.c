#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);

    int i = 0;

    while (s[i] != '\0' && s[i] != '\n') {
        s[i] = tolower(s[i]);
        i++;
    }

    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    printf("%s", s);

    return 0;
}