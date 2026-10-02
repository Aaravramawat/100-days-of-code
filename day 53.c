#include <stdio.h>

int main() {
    int n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++) {
        totalSum -= nums[i];

        if (leftSum == totalSum) {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}