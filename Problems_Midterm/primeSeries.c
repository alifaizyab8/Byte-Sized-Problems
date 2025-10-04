#include <stdio.h>

void primeSeries(int);

int main()
{
    int term;
    printf("Prime number upto ? ....\n");
    scanf("%d", &term);
    primeSeries(term);
    return 0;
}

void primeSeries(int n)
{
    int count;
    printf("Prime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++)
    { // start from 2
        count = 0;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("%d ", i);
        }
    }
    
}
