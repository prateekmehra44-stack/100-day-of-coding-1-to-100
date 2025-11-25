#include <stdio.h>

int main() {
    int n, x, index = -1;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    if (index == -1)
        return 0;

    for (int i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
