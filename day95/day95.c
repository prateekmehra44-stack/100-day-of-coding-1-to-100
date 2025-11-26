#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

struct Student topStudent(struct Student s1, struct Student s2) {
    return (s1.marks > s2.marks) ? s1 : s2;
}
