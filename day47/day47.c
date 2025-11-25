#include <stdio.h>

int main() {
    char s1[300], s2[300];
    int f1[256] = {0}, f2[256] = {0}, i = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    while(s1[i] != '\0') {
        if(s1[i] != '\n')
            f1[(unsigned char)s1[i]]++;
        i++;
    }

    i = 0;
    while(s2[i] != '\0') {
        if(s2[i] != '\n')
            f2[(unsigned char)s2[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(f1[i] != f2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
