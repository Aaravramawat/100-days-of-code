#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle:");

    if (scanf("%f %f %f", &a, &b, &c) == 3) {

        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Side lengths must be greater than zero.");
            return 0;
        }
         if ((a + b > c) && (a + c > b) && (b + c > a)) {
            
            if (a == b && b == c) {
                printf("The triangle is Equilateral.");
            }
               else if (a == b || b == c || a == c) {
                printf("The triangle is Isosceles.");
            }
            else {
                printf("The triangle is Scalene.");
            }
            
        } else {
            printf("The given side lengths do not form a valid triangle.");
        }

    } else {
        printf("Invalid input. Please enter numbers.");
    }

    return 0;
}
