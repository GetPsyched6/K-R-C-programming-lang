#include <cosmopolitan.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void temperature();

int main(int argc, char const *argv[]) {
    temperature();
    return 0;
}

void temperature() {
    for (int faren = LOWER; faren <= UPPER; faren += STEP)
        printf("faren: %d, celc: %.1f\n", faren, 5.0 / 9.0 * (faren - 32.0));
}