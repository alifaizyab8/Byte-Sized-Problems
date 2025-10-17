#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        printf(" %c ", i);

        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
