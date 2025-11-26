#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum Traffic {RED, YELLOW, GREEN};

void sum_and_average_from_file() {
    char filename[256];
    int x, count = 0;
    long long sum = 0;
    printf("Enter numbers filename (default: numbers.txt): ");
    if (scanf("%255s", filename) != 1) strcpy(filename, "numbers.txt");
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return;
    }
    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No integers found in %s\n", filename);
        return;
    }
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", (double)sum / count);
}

void store_and_read_students() {
    char name[100];
    int roll, n;
    float marks;
    FILE *fp;
    printf("How many student records to add? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number\n");
        return;
    }
    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Could not open students.txt for appending\n");
        return;
    }
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);
        getchar();
        fprintf(fp, "%s\n%d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Could not open students.txt for reading\n");
        return;
    }
    printf("\nStored student records:\n");
    while (fgets(name, sizeof(name), fp)) {
        name[strcspn(name, "\n")] = '\0';
        if (fscanf(fp, "%d %f\n", &roll, &marks) != 2) break;
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }
    fclose(fp);
}

void print_days_enum() {
    const char *names[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", names[i], i);
    }
}

void traffic_light_action() {
    int v;
    printf("Enter traffic light value (0=RED,1=YELLOW,2=GREEN): ");
    if (scanf("%d", &v) != 1) { printf("Invalid input\n"); return; }
    enum Traffic t = (v==0?RED:(v==1?YELLOW:GREEN));
    if (t == RED) printf("Stop\n");
    else if (t == YELLOW) printf("Wait\n");
    else printf("Go\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n1. Sum & Average from numbers file\n2. Store & Display Student Records\n3. Print Days enum\n4. Traffic light action\n5. Exit\nChoose an option: ");
        if (scanf("%d", &choice) != 1) { printf("Invalid input\n"); break; }
        if (choice == 1) sum_and_average_from_file();
        else if (choice == 2) store_and_read_students();
        else if (choice == 3) print_days_enum();
        else if (choice == 4) traffic_light_action();
        else if (choice == 5) break;
        else printf("Invalid choice\n");
    }
    return 0;
}
