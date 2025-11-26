#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal = RED;

    if (signal == RED) printf("Stop\n");
    else if (signal == YELLOW) printf("Wait\n");
    else printf("Go\n");

    return 0;
}
