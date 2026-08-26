#include <stdio.h>

int main() {
    int num, Num, remainder, reversedNum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    Num = num;

    while (num != 0) {
        remainder = num % 10;                 
        reversedNum = reversedNum * 10 + remainder;
        num /= 10; 
    }

    if (Num == reversedNum) {
        printf("%d is a palindrome.\n", Num);
    } else {
        printf("%d is not a palindrome.\n", Num);
    }

    return 0;
}
