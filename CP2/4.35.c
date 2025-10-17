#include <stdio.h>

int main(void) {
    unsigned int x;
    int shouldExit = 0;  // flag to simulate 'break'

    // loop continues while x <= 10 AND we haven't triggered exit
    for (x = 1; x <= 10 && !shouldExit; ++x) {
        if (x == 5)
            shouldExit = 1;  // set flag instead of break

        if (!shouldExit)  // print only if not exiting
            printf("%u ", x);
    }

    printf("\nBroke out of loop at x == %u\n", x);
}