#include <stdio.h>

int main() {
    int n, m, i, j, r, c;
    int a[20][20];

    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n + m - 1; i++) {
        if(i < m) r = 0, c = i;
        else r = i - m + 1, c = m - 1;

        while(r < n && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
    }

    return 0;
}
