#include <stdio.h>

int main() {
    char s[300];
    int i = 0, spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] == ' ')
            spaces++;
        else if(s[i] >= '0' && s[i] <= '9')
            digits++;
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            ;
        else if(s[i] != '\n')
            special++;
        i++;
    }

    printf("%d %d %d", spaces, digits, special);

    return 0;
}
