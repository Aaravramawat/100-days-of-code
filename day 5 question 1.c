#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time;
    double simpleinterest, compoundinterest;
    printf("Enter the principal:");
    scanf("%lf", &principal);
    printf("Enter the Rate:");
    scanf("%lf", &rate);
    printf("Enter the Time");
    scanf("%lf", &time);
    simpleinterest = (principal * rate * time) / 100;
    compoundinterest = principal * pow(1 + rate / 100, time) - principal;
    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);
    return 0;
}