#include <stdio.h>

enum Gender { MALE = 1, FEMALE = 2, OTHER = 3 };

int main() {
    enum Gender g = FEMALE;

    printf("MALE = %d\n", MALE);
    printf("FEMALE = %d\n", FEMALE);
    printf("OTHER = %d\n", OTHER);

    printf("Person gender value = %d\n", g);

    struct Person {
        char name[20];
        enum Gender gender;
    };

    struct Person p = {"Rahul", MALE};

    printf("Name: %s\nGender value: %d\n", p.name, p.gender);

    return 0;
}
