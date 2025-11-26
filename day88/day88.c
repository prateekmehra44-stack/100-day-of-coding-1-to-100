#include <stdio.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    enum Role r;

    const char *names[] = {"ADMIN", "USER", "GUEST"};

    for (r = ADMIN; r <= GUEST; r++)
        printf("%s = %d\n", names[r], r);

    r = USER;

    switch (r) {
        case ADMIN: printf("Admin Access\n"); break;
        case USER: printf("User Access\n"); break;
        case GUEST: printf("Guest Access\n"); break;
    }

    return 0;
}
