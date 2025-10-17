#include <stdio.h>

void printBinary(int n) {
    int divisor = 128; // 2^7 for 8-bit numbers (since 256 = 2^8)

    while (divisor > 0) {
        int bit = n / divisor;   // find whether bit is 1 or 0
        printf("%d", bit);
        n = n % divisor;         // remove the most significant bit
        divisor = divisor / 2;   // move to next lower bit
    }
}

int main(void) {
    printf("Dec\tBinary\t\tOct\tHex\n");
    printf("--------------------------------------\n");

    for (int i = 1; i <= 256; ++i) {
        printf("%3d\t", i);
        printBinary(i);
        printf("\t%03o\t%02X\n", i, i);
    }

    return 0;
}
