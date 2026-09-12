#include <stdio.h>

void complement(int n) {
    if (n == 0)
        return;

    complement(n / 10);

    if (n % 10 == 0)
        printf("1");
    else
        printf("0");
}

int main() {
    int n;

    scanf("%d", &n);

    complement(n);

    return 0;
}