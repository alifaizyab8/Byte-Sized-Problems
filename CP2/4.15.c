#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000.0;  // starting amount

    // loop for rates from 5% to 10%
    for (double rate = 0.05; rate <= 0.10; rate += 0.01) {

        printf("Interest rate: %.2lf%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        // loop for years 1 to 10
        for (int year = 1; year <= 10; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }

        printf("\n"); // blank line between rates
    }

    return 0;
}
