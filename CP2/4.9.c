#include <stdio.h>

int main(void)
{
    int n, sum = 0, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        sum += value;
    }

    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / n);
    return 0;
}
