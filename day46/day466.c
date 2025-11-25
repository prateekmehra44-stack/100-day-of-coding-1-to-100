#include <stdio.h>

int main() {
    char s[300];
    int freq[26] = {0}, i = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] == 2) {
                printf("%c", s[i]);
                return 0;
            }
        }
        i++;
    }

    printf("-1");

    return 0;
}
