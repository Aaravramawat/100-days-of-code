#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    double average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    if (count > 0) {
        average = (double)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2lf", average);
    }
    else {
        printf("No numbers found in file.");
    }

    fclose(fp);

    return 0;
}