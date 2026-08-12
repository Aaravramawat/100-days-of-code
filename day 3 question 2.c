#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    num3 = num1; 
    num1 = num2;   
    num2 = num3;  

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
