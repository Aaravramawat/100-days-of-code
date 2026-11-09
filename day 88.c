
#include <stdio.h>

enum Days { MON, TUE, WED, THU, FRI };

int main() {
    char *names[] = {
        "MON", "TUE", "WED", "THU", "FRI"
    };

    for (int i = 0; i < 5; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
