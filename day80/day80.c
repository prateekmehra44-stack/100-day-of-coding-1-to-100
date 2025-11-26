#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fnum;
    int num, count = 0;
    long long sum = 0;
    double avg;
    fnum = fopen("numbers.txt", "r");
    if (fnum != NULL) {
        while (fscanf(fnum, "%d", &num) == 1) {
            sum += num;
            count++;
        }
        fclose(fnum);
        if (count > 0) {
            avg = (double)sum / count;
            printf("Numbers file: count = %d\n", count);
            printf("Sum = %lld\n", sum);
            printf("Average = %.2f\n\n", avg);
        } else {
            printf("numbers.txt is empty or contains no integers\n\n");
        }
    } else {
        printf("numbers.txt not found\n\n");
    }

    int n, i;
    char name[100];
    int roll, marks;
    FILE *fstu;
    printf("How many student records to add? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number\n");
        return 1;
    }
    getchar();
    fstu = fopen("students.txt", "w");
    if (fstu == NULL) {
        printf("Could not create students.txt\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        if (fgets(name, sizeof(name), stdin) == NULL) name[0] = '\0';
        size_t ln = strlen(name);
        if (ln > 0 && name[ln-1] == '\n') name[ln-1] = '\0';
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        getchar();
        fprintf(fstu, "%s\n%d %d\n", name, roll, marks);
    }
    fclose(fstu);
    printf("\nStudent records saved to students.txt\n\n");

    fstu = fopen("students.txt", "r");
    if (fstu == NULL) {
        printf("Could not open students.txt for reading\n");
        return 1;
    }
    printf("Reading student records:\n");
    while (fgets(name, sizeof(name), fstu) != NULL) {
        size_t ln = strlen(name);
        if (ln > 0 && name[ln-1] == '\n') name[ln-1] = '\0';
        if (fscanf(fstu, "%d %d", &roll, &marks) != 2) break;
        int c = fgetc(fstu);
        if (c != '\n' && c != EOF) ungetc(c, fstu);
        printf("Name: %s\nRoll: %d\nMarks: %d\n\n", name, roll, marks);
    }
    fclose(fstu);
    return 0;
}
