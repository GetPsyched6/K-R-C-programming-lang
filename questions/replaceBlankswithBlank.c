#include <cosmopolitan.h>

int main(int argc, char const *argv[]) {
    int c;
    int last = EOF;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && last != ' ')
            putchar(c);
    }
    return 0;
}