#include <stdio.h>

int main() {
    char s[500], word[500], longest[500];
    int i = 0, j = 0, max = 0, len = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] != ' ' && s[i] != '\n') {
            word[j++] = s[i];
            len++;
        } else {
            word[j] = '\0';
            if(len > max) {
                max = len;
                int k = 0;
                while(word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            len = 0;
        }
        i++;
    }

    printf("%s", longest);
    return 0;
}
