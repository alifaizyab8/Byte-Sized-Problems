#include <stdio.h>

int main(void) {
    long principal = 100000;   // $1000.00 in pennies
    int rate = 5;              // 5% annual interest

    printf("%s\t%s\n", "Year", "Amount on deposit");

    long amount = principal;

    for (int year = 1; year <= 10; ++year) {
        // multiply by (100 + rate), then divide by 100
        amount = amount * (100 + rate) / 100;

        // break into dollars and cents
        long dollars = amount / 100;
        int cents = amount % 100;

        printf("%d\t%ld.%d\n", year, dollars, cents);
    }

    return 0;
}
