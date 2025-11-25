#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] == ' ')
            s[i] = '-';
        i++;
    }

    printf("%s", s);

    return 0;
}
