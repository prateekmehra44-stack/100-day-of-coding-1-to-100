#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    int a[10][10];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(!flag) break;
    }

    if(flag) printf("Symmetric");
    else printf("Not symmetric");

    return 0;
}
