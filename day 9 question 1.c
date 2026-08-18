#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        printf("The coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Root Category: Real and Distinct\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        
        printf("Root Category: Real and Equal\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    } 
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Root Category: Complex and Distinct\n");
        printf("Root 1 = %f + %fi\n", realPart, imagPart);
        printf("Root 2 = %f - %fi\n", realPart, imagPart);
    }

    return 0;
}
