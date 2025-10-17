#include <stdio.h>

int main(void) {
    float amount = 1000000.00f;  // 1 million
    amount = amount + 0.12f;     // add 12 cents

    printf("Result: %.2f\n", amount);
    return 0;
}
