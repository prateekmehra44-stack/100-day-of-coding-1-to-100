#include <stdio.h>

int main() {
    char s[500];
    int i = 0, start = 0, end = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] == ' ' || s[i] == '\n') {
            end = i - 1;
            while(end >= start) {
                printf("%c", s[end]);
                end--;
            }
            if(s[i] == ' ') printf(" ");
            start = i + 1;
        }
        i++;
    }

    return 0;
}
