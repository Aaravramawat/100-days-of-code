
#include <stdio.h>

int main() {
    int n, a[1000];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int expected = n * (n + 1) / 2;

    printf("%d", expected - sum);

    return 0;
}
