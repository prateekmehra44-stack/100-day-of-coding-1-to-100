#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum Traffic {RED, YELLOW, GREEN};
enum Months {JAN=31, FEB=28, MAR=31, APR=30, MAY=31, JUN=30, JUL=31, AUG=31, SEP=30, OCT=31, NOV=30, DEC=31};
enum Status {SUCCESS=10, FAILURE, TIMEOUT};

int main() {
    int i;
    for (i = SUNDAY; i <= SATURDAY; i++)
        printf("Day %d: %d\n", i, i);

    enum Traffic t = RED;
    if (t == RED) printf("Stop\n");
    else if (t == YELLOW) printf("Wait\n");
    else printf("Go\n");

    printf("Jan days: %d\n", JAN);
    printf("Feb days: %d\n", FEB);
    printf("Mar days: %d\n", MAR);

    enum Status s = SUCCESS;
    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    printf("%d %d %d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
