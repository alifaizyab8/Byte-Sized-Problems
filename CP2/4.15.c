#include <stdio.h>
#include <math.h>

int main(void) {
    double principal;
    int years;
    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1) return 1;
    printf("Enter number of years: ");
    if (scanf("%d", &years) != 1 || years < 1) return 1;

    for (int rate = 5; rate <= 10; ++rate) {
        double amount = principal;
        printf("\nRate: %d%%\nYear  Amount\n", rate);
        for (int y = 1; y <= years; ++y) {
            amount *= (1.0 + rate / 100.0);
            printf("%4d  %.2f\n", y, amount);
        }
    }
    return 0;
}