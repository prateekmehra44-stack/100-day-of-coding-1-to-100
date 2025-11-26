#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("input.txt not found\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("output.txt could not be created\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch)) ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    return 0;
}
