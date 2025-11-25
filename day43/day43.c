#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, len = 0;
    
    fgets(s, sizeof(s), stdin);

    while(s[len] != '\0')
        len++;
    len--;

    for(j = len - 1; j >= 0; j--)
        printf("%c", s[j]);

    return 0;
}
