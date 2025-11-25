#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, len = 0, flag = 1;

    fgets(s, sizeof(s), stdin);

    while(s[len] != '\0')
        len++;
    len--;

    for(j = 0; j < len; j++) {
        if(s[j] != s[len - 1 - j]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
