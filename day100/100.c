#include <stdio.h>

struct Person {
    int age;
    float height;
};

int main() {
    struct Person p, *ptr;
    ptr = &p;

    scanf("%d %f", &ptr->age, &ptr->height);

    printf("%d %.2f", ptr->age, ptr->height);

    return 0;
}
