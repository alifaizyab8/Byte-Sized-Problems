#include <stdio.h>

int main(void)
{
    int i;

    /* a) 1,3,5,7,9,11,13 */

    for (i = 1; i <= 13; i += 2)
    {
        printf("%d", i);
        if (i != 13)
            printf(",");
    }
    printf("\n");

    /* b) 2,5,8,11,14,17 */

    for (i = 2; i <= 17; i += 3)
    {
        printf("%d", i);
        if (i != 17)
            printf(",");
    }
    printf("\n");

    /* c) 30,20,10,0,-10,-20,-30 */

    for (i = 30; i >= -30; i -= 10)
    {
        printf("%d", i);
        if (i != -30)
            printf(",");
    }
    printf("\n");

    /* d) 15,23,31,39,47,55 */

    for (i = 15; i <= 55; i += 8)
    {
        printf("%d", i);
        if (i != 55)
            printf(",");
    }
    printf("\n");

    return 0;
}