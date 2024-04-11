#include <cosmopolitan.h>

int main(int argc, char const *argv[]) {
    int ndigit[10];
    int c, i, nwhite, nother;
    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ndigit[c - '0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else
            nother++;
    }
    printf("digits =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf(", white = %d, other = %d", nwhite, nother);

    return 0;
}