
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input student details
    for(i = 0; i < 5; i++) {
        printf("Enter name, roll and marks of student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");

    for(i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
