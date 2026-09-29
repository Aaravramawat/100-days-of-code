#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        flag = 0;
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            freq[(unsigned char)str1[i]]++;
            freq[(unsigned char)str2[i]]--;
        }

        for (i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}