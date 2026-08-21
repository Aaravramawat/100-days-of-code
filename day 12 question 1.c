#include <stdio.h>

int main() {
    int days;
    int fine = 0;

   
    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input. Please enter a valid non-negative integer.");
        return 1;
    }
    if (days == 0) {
        printf("No late days! No fine incurred.");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total Library Fine: ₹%d", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Library Fine: ₹%d", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Library Fine: ₹%d", fine);
    } 
    else {
        printf("Membership Cancelled");
    }

    return 0;
}
