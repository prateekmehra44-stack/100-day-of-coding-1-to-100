#include <stdio.h>

int main() {
    char s[300], out[300];
    int i = 0, j = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        char c = s[i];
        char x = (c >= 'A' && c <= 'Z') ? c + 32 : c;
        if(!(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'))
            out[j++] = c;
        i++;
    }

    out[j] = '\0';
    printf("%s", out);

    return 0;
}
