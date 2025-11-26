#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r;

    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &r);

    if (r == ADMIN)
        printf("Welcome Admin\n");
    else if (r == USER)
        printf("Welcome User\n");
    else if (r == GUEST)
        printf("Welcome Guest\n");
    else
        printf("Invalid role\n");

    return 0;
}
