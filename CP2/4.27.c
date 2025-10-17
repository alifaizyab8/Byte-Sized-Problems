#include <stdio.h>

int main(void)
{
    int a, b, c;
    int a2, b2, c2;
    printf("(a, b, c)\n");

    for (c = 1; c <= 500; ++c)
    { // hypotenuse
        c2 = c * c;

        for (a = 1; a < c; ++a)
        { // first side
            a2 = a * a;

            for (b = a; b < c; ++b)
            { // second side
                b2 = b * b;

                if (a2 + b2 == c2)
                {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
