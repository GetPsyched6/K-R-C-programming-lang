#include <cosmopolitan.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[]) {
    int ncpw = 0;
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            printf("\n");
        } else if (state = OUT) {
            state = IN;
            printf("[]");
            ncpw++;
        } else {
            printf("[]");
            ncpw++;
        }
    }

    return 0;
}