#include <cosmopolitan.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[]) {
    int nc, nw, nl, state, c;
    nc = nw = nl = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            putchar(c);
            ++nw;
        } else {
            putchar(c);
        }
    }
    printf("\n");
    printf("%d, %d, %d", nc, nw, nl);
    return 0;
}