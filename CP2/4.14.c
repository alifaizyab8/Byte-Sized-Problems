#include <stdio.h>

int main(void)
{
    printf("n   n!\n");
    unsigned long long fact = 1;
    for (int n = 1; n <= 20; ++n)
    {
        fact *= n;
        printf("%d  %llu\n", n, fact);
    }
}