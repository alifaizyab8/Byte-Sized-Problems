#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 7; i <= 100; i += 7) {
        sum += i;
    }
    printf("Sum of multiples of 7 from 1 to 100 = %d\n", sum);
    return 0;
}