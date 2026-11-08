
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = ADMIN;

    switch (r) {
        case ADMIN:
            printf("Welcome Admin. Full Access");
            break;

        case USER:
            printf("Welcome User. Limited Access");
            break;

        case GUEST:
            printf("Welcome Guest. Read Only Access");
            break;
    }

    return 0;
}
