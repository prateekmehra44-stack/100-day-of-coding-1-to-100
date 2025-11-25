#include <stdio.h>

int main() {
    char s[300];
    int i = 0, j, k, n = 0;

    fgets(s, sizeof(s), stdin);

    while(s[n] != '\0' && s[n] != '\n')
        n++;

    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            for(k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }

    return 0;
}
