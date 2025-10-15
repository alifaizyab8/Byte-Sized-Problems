#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input\n");
        return 1;
    }

    long long sum = 0, sum_sq = 0, sum_cu = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
        sum_sq += (long long)i * i;
        sum_cu += (long long)i * i * i;
    }

    printf("Sum = %lld\nSum of squares = %lld\nSum of cubes = %lld\n", sum, sum_sq, sum_cu);
    return 0;
}