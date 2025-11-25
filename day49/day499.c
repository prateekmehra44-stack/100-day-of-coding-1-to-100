#include <stdio.h>

int main() {
    char s[300];
    int i = 0, last = 0;

    fgets(s, sizeof(s), stdin);

    if(s[0] != ' ' && s[0] != '\n')
        printf("%c. ", s[0]);

    while(s[i] != '\0') {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n') {
            last = i + 1;
            break;
        }
        i++;
    }

    i = last;
    while(s[i] != '\0') {
        if(s[i] == ' ' || s[i] == '\n') break;
        printf("%c", s[i]);
        i++;
    }

    return 0;
}
