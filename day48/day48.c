#include <stdio.h>

int main() {
    char s1[500], s2[500], t[1000];
    int i = 0, j = 0, n1 = 0, n2 = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    while(s1[n1] != '\0') n1++;
    if(n1>0 && s1[n1-1]=='\n') { s1[n1-1]='\0'; n1--; }
    while(s2[n2] != '\0') n2++;
    if(n2>0 && s2[n2-1]=='\n') { s2[n2-1]='\0'; n2--; }

    if(n1 != n2) { printf("Not rotation"); return 0; }

    for(i = 0; i < n1*2; i++) {
        if(i < n1) t[i] = s1[i];
        else t[i] = s1[i - n1];
    }
    t[n1*2] = '\0';

    for(i = 0; i <= 2*n1 - n2; i++) {
        int found = 1;
        for(j = 0; j < n2; j++) {
            if(t[i + j] != s2[j]) { found = 0; break; }
        }
        if(found) { printf("Rotation"); return 0; }
    }

    printf("Not rotation");
    return 0;
}
