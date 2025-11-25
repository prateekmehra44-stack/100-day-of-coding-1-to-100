#include <stdio.h>

int main() {
    char s[300], ch;
    int i = 0, count = 0;

    fgets(s, sizeof(s), stdin);
    scanf("%c", &ch);

    while(s[i] != '\0') {
        if(s[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
