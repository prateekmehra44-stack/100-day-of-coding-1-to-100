#include <stdio.h>

int main() {
    enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    for (int m = JAN; m <= DEC; m++) {
        printf("%d has %d days\n", m, days[m]);
    }
    return 0;
}
