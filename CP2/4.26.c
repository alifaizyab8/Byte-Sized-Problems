#include <stdio.h>

int main(void) {
    int terms;
    double pi = 0.0;
    int sign = 1; // alternates between +1 and -1

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; ++i) {
        double term = 4.0 / (2 * i + 1);
        pi += sign * term;
        sign = -sign; // change sign for next term
    }

    printf("\nApproximation of Pi after %d terms = %.10f\n", terms, pi);
    return 0;
}
