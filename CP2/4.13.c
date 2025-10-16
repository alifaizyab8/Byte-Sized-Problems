#include <stdio.h>

int main() {
    int n, i;
    long  sum = 0, sum_sq = 0, sum_cu = 0;

    scanf("%d", &n);

    i = 0;
    while (i <= n) {
        sum = sum + i;
        sum_sq = sum_sq + i * i;
        sum_cu = sum_cu + i * i * i;
        i = i + 1;
    }

    printf("%ld %ld %ld", sum, sum_sq, sum_cu);
    return 0;
}