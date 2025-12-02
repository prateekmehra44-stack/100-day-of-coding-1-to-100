#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    scanf("%d %f %s", &s->roll, &s->marks, s->name);

    printf("%d %.2f %s", s->roll, s->marks, s->name);

    free(s);
    return 0;
}
