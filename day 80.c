#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Taking and storing student records
    for (i = 1; i <= n; i++) {

        printf("\nEnter name, roll and marks of student %d: ", i);
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Opening file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 0;
    }

    printf("\nStudent Records:\n");

    // Reading and displaying records
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {

        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}