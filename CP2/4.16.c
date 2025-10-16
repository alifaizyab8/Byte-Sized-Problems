#include<stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 10; i > 0; i--)
    {
        for (int j = i; j > 0 ; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for(int k = 0; k < i; k++)
        {
                printf("  ");
        }
        for (int j = 10; j > i; j--)
        {
            

            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for(int k = 10; k > i; k--)
        {
                printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            

            printf("* ");
        }
        printf("\n");
    }
}