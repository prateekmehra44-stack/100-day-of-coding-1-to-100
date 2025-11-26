#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date join;
};

int main() {
    struct Employee e = {1, "Rahul", {12, 5, 2023}};
    printf("%d %s %d-%d-%d", e.id, e.name, e.join.day, e.join.month, e.join.year);
}
