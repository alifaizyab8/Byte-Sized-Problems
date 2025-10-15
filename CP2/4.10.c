#include <stdio.h>

int main(void) {
    printf("Celsius  Fahrenheit\n");
    for (int c = 30; c <= 50; ++c) {
        double f = c * 9.0 / 5.0 + 32.0;
        printf("%6d  %10.2f\n", c, f);
    }
    return 0;
}

