#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum Traffic {RED, YELLOW, GREEN};
enum Months {JAN=31, FEB=28, MAR=31, APR=30, MAY=31, JUN=30, JUL=31, AUG=31, SEP=30, OCT=31, NOV=30, DEC=31};
enum Status {SUCCESS=10, FAILURE, TIMEOUT};
enum Menu {ADD=1, SUBTRACT, MULTIPLY};

int main() {

    for (int d = SUNDAY; d <= SATURDAY; d++)
        printf("%d ", d);
    printf("\n");

    enum Traffic t = RED;
    if (t == RED) printf("Stop\n");
    else if (t == YELLOW) printf("Wait\n");
    else printf("Go\n");

    printf("JAN = %d\nFEB = %d\nDEC = %d\n", JAN, FEB, DEC);

    enum Status s = FAILURE;
    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    int a = 10, b = 5;
    enum Menu ch = MULTIPLY;
    switch (ch) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}
