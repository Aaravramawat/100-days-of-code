
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, max = 0;

    // Input student details
    for(i = 0; i < 5; i++) {
        printf("Enter name, roll and marks:\n");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find highest marks
    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    // Display topper
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[max].name);
    printf("Roll: %d\n", s[max].roll);
    printf("Marks: %.2f\n", s[max].marks);

    return 0;
}
