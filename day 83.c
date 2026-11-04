
#include <stdio.h>

enum Months {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months month = FEB;

    switch (month) {
        case JAN: printf("January: 31 days"); break;
        case FEB: printf("February: 28 or 29 days"); break;
        case MAR: printf("March: 31 days"); break;
        case APR: printf("April: 30 days"); break;
        case MAY: printf("May: 31 days"); break;
        case JUN: printf("June: 30 days"); break;
        case JUL: printf("July: 31 days"); break;
        case AUG: printf("August: 31 days"); break;
        case SEP: printf("September: 30 days"); break;
        case OCT: printf("October: 31 days"); break;
        case NOV: printf("November: 30 days"); break;
        case DEC: printf("December: 31 days"); break;
    }

    return 0;
}
