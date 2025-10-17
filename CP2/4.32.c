#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an odd number between 1 and 19: ");
    scanf("%d", &n);

    if (n < 1 || n > 19 || n % 2 == 0)
    {
        printf("Invalid input. Please enter an odd number between 1 and 19.\n");
        return 1;
    }

    int i, j, spaces, stars;
    int mid = n / 2;

    // Upper half including middle line
    for (i = 0; i <= mid; i++)
    {
        spaces = mid - i;
        stars = 2 * i + 1;

        for (j = 0; j < spaces; j++)
            printf(" ");
        for (j = 0; j < stars; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (i = mid - 1; i >= 0; i--)
    {
        spaces = mid - i;
        stars = 2 * i + 1;

        for (j = 0; j < spaces; j++)
            printf(" ");
        for (j = 0; j < stars; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
