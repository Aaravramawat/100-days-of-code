#include <stdio.h>

int main() {
    int n, first, last, digits = 0;
    int power = 1, middle, result;

    scanf("%d", &n);

    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    last = n % 10;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}