#include <stdio.h>

int main(void) {
    int x = 1, y = 2;
    int a = 3, b = 4, g = 5;
    int i = 6, j = 7;

    // (a)
    printf("a) %d == %d\n",  (!(x < 5) && !(y >= 7)), (x >= 5 && y < 7));

    // (b)
    printf("b) %d == %d\n", (!(a == b) || !(g != 5)), (a != b || g == 5));

    // (c)
    printf("c) %d == %d\n", (!( (x <= 8) && (y > 4) )), (x > 8 || y <= 4));

    // (d)
    printf("d) %d == %d\n", (!( (i > 4) || (j <= 6) )), (i <= 4 && j > 6));

    return 0;
}
