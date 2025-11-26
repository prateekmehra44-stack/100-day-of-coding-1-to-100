#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int total = 0;
    for(int i = 0; i < n; i++) total += a[i];

    int left = 0;
    for(int i = 0; i < n; i++) {
        int right = total - left - a[i];
        if(left == right) {
            printf("%d", i);
            return 0;
        }
        left += a[i];
    }

    printf("-1");
    return 0;
}
