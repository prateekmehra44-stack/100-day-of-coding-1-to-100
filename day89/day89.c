#include <stdio.h>

enum Numbers { A = 1, B, C = 10, D, E = 20 };

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);
    return 0;
}
