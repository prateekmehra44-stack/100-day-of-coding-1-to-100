#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    k = k % n;

    int start = 0, end = n - 1;
    while (start < end) {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }

    start = 0;
    end = k - 1;
    while (start < end) {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }

    start = k;
    end = n - 1;
    while (start < end) {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
