
#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];
    int sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // Sum of first k elements
    for (i = 0; i < k; i++) {
        sum = sum + arr[i];
    }

    maxSum = sum;

    // Slide the window
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}
