#define LOWER 0
#define UPPER 300
#define STEP 20
int main() {
    // * This program converts farenheit to celcius.
    // float faren, celc;
    // int upper, lower, step;
    // lower = 0;
    // upper = 300;
    // step = 20;
    // faren = lower;

    // printf("Farenheit Celcius\n");
    // while (faren <= upper) {
    //     celc = 5.0 / 9.0 * (faren - 32.0);
    //     printf("%9.0f %7.1f\n", faren, celc);
    //     faren += step;
    // }
    // celc = lower;
    // printf("Celcius Farenheit\n");
    // while (celc <= upper) {
    //     faren = (9.0 / 5.0) * celc + 32;
    //     printf("%7.0f %9.1f\n", celc, faren);
    //     celc += step;
    // }
    int faren;
    printf("Farenheit Celcius\n");
    for (faren = UPPER; faren >= LOWER; faren -= STEP) {
        printf("%9d %7.1f\n", faren, 5.0 / 9.0 * (faren - 32.0));
    }
}