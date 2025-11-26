#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum Traffic {RED, YELLOW, GREEN};
enum Months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    int i;

    for (i = SUNDAY; i <= SATURDAY; i++)
        printf("Day %d\n", i);

    enum Traffic t = RED;
    if (t == RED) printf("Stop\n");
    else if (t == YELLOW) printf("Wait\n");
    else printf("Go\n");

    for (i = JAN; i <= DEC; i++) {
        if (i==JAN||i==MAR||i==MAY||i==JUL||i==AUG||i==OCT||i==DEC)
            printf("%d has 31 days\n", i);
        else if (i==APR||i==JUN||i==SEP||i==NOV)
            printf("%d has 30 days\n", i);
        else
            printf("%d has 28 days\n", i);
    }

    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    return 0;
}
