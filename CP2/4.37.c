#include <stdio.h>

int main(void) {
    for (unsigned int x = 1; x <= 10; ++x) {
        if (x != 5) {              // only print if x is NOT 5
            printf("%u ", x);
        }
    }

    puts("\nSkipped printing the value 5");
    return 0;
}
