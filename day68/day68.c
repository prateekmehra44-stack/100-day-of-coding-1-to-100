#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int sum = 0;
    for(int i=0;i<n;i++) sum += a[i];

    int total = n * (n + 1) / 2;
    printf("%d", total - sum);

    return 0;
}
