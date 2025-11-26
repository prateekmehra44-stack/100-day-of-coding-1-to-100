#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[100], destName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", srcName);
    printf("Enter destination filename: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Source file not found\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Could not create destination file\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully\n");
    return 0;
}
