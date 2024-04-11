#include <cosmopolitan.h>

int power(int, int);

int main(int argc, char const *argv[]) {
    int i;
    for (i = 1; i <= 10; i++)
        printf("%2d %6d %6d\n", i, power(3, i), power(-2, i));
    return 0;
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p = p * base;
    return p;
}