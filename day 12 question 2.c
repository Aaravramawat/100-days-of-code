#include <stdio.h>

int main() {
    float units, bill_amount = 0;

    printf("Enter the total units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1;
    }
    if (units <= 100) {
        bill_amount = units * 5;
    } 
    else if (units <= 200) {
        bill_amount = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill_amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill_amount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    printf("Total Electricity Bill: ₹%f", bill_amount);

    return 0;
}
