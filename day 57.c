
#include <stdio.h>

int main() {
    int arr[100], n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        found = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", found);
    }

    return 0;
}