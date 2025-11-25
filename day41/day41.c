#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0')
        i++;

    printf("%d", i - 1);

    return 0;
}
