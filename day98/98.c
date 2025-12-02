#include <stdio.h>
#include <string.h>

struct Data {
    int x;
    float y;
    char name[20];
};

int main() {
    struct Data a, b;

    scanf("%d %f %s", &a.x, &a.y, a.name);
    scanf("%d %f %s", &b.x, &b.y, b.name);

    if (a.x == b.x && a.y == b.y && strcmp(a.name, b.name) == 0)
        printf("Identical");
    else
        printf("Not Identical");

    return 0;
}
