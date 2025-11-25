#include <stdio.h>

int main() {
    int n, i, j, k, distinct = 1;
    int a[10][10];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        for(k = i + 1; k < n; k++) {
            if(a[i][i] == a[k][k]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct) printf("Distinct");
    else printf("Not distinct");

    return 0;
}
