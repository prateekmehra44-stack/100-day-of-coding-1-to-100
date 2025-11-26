#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n], pre[n], suf[n], ans[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    pre[0] = 1;
    for(int i=1;i<n;i++) pre[i] = pre[i-1] * a[i-1];

    suf[n-1] = 1;
    for(int i=n-2;i>=0;i--) suf[i] = suf[i+1] * a[i+1];

    for(int i=0;i<n;i++) ans[i] = pre[i] * suf[i];

    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d", ans[i]);
    }

    return 0;
}
