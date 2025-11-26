#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
void printStudent(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student stu = {1, "Alice", 92.5};
    printStudent(stu); 
    return 0;
}