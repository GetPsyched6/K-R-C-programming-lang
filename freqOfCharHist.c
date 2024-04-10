#include <cosmopolitan.h>

int main(int argc, char const *argv[]) {
    int nchar[26];
    int c, i, j;
    for (i = 0; i < 26; i++) {
        nchar[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            nchar[c - 'a']++;
        }
    }
    for (i = 0; i < 26; i++) {
        printf("\n%c", i + 'a');
        for (j = 0; j < nchar[i]; j++)
            printf("[]");
    }
    return 0;
}