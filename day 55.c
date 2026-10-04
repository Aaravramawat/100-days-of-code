
#include <stdio.h>

int main() {
    int n, i, j, count;
    int found = 0;

    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            printf("%d", nums[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1");
    }

    return 0;
}