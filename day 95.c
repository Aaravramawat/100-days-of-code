
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student topStudent(struct Student s1, struct Student s2) {
    if (s1.marks > s2.marks) {
        return s1;
    }
    else {
        return s2;
    }
}

int main() {
    struct Student s1, s2, top;

    printf("Enter first student name, roll and marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printf("Enter second student name, roll and marks: ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    top = topStudent(s1, s2);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
