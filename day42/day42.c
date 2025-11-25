#include <stdio.h>

int main() {
    char s[200];
    int i = 0, v = 0, c = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        char ch = s[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char x = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                v++;
            else
                c++;
        }
        i++;
    }

    printf("%d %d", v, c);

    return 0;
}
