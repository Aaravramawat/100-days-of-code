#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;

    int choice;
    scanf("%d", &choice);

    p.gender = choice;

    if (p.gender == MALE) {
        printf("Male");
    }
    else if (p.gender == FEMALE) {
        printf("Female");
    }

    return 0;
}