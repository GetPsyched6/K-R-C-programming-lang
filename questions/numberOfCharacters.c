#include <cosmopolitan.h>

int main(int argc, char const *argv[]) {
    int c;
    double nb, nt, nl;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
    }
    printf("\n");
    printf("%.0f, %.0f, %.0f", nb, nl, nt);
    return 0;
}