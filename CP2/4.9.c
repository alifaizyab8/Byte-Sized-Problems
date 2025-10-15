#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid count\n");
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int value;
        if (scanf("%d", &value) != 1) {
            printf("Insufficient values\n");
            return 1;
        }
        sum += value;
    }

    double avg = (double)sum / n;
    printf("Sum = %lld\nAverage = %.2f\n", sum, avg);
    return 0;
}