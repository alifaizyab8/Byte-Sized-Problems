#include <stdio.h>
#include <math.h>
void ceilmultiple(double x)
{
    int y;
    y = ceil(x + .5);
    printf("Original number: %.2f\n", x);
    printf("Rounded number: %d\n\n", y);
}
int main()
{
    double x;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%lf", &x);
        ceilmultiple(x);
    }

    return 0;
}
