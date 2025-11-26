#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int cand = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(cnt == 0) { cand = a[i]; cnt = 1; }
        else if(a[i] == cand) cnt++;
        else cnt--;
    }

    int freq = 0;
    for(int i = 0; i < n; i++) if(a[i] == cand) freq++;

    if(freq > n/2) printf("%d", cand);
    else printf("-1");

    return 0;
}
