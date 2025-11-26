#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s\n", text);

    fclose(fp);
    printf("Text appended successfully\n");
    return 0;
}
