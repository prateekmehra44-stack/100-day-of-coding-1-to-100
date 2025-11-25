#include <stdio.h>

int main() {
    char s[20];
    int d, y;

    scanf("%d/%*d/%d", &d, &y);

    printf("%02d-Apr-%d", d, y);

    return 0;
}
