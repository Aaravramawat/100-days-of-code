
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
    } else {
        for (i = 0; i < lastSpace; i++) {
            if (i == 0 && name[i] != ' ') {
                printf("%c. ", name[i]);
            }

            if (name[i] == ' ' && name[i + 1] != ' ') {
                printf("%c. ", name[i + 1]);
            }
        }

        printf("%s\n", name + lastSpace + 1);
    }

    return 0;
}