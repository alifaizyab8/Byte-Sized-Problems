#include <stdio.h>

int main(void) {
    printf("n   n!\n");
    unsigned long long fact = 1;
    for (int n = 1; n <= 5; ++n) {
        fact *= n;
        printf("%-2d  %llu\n", n, fact);
    }
    printf("\nNote: factorials grow quickly; larger values may overflow 32/64-bit types.\n");
    return 0;
}