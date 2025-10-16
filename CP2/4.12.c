#include <stdio.h>


int main(void) {
    printf("Prime numbers from 1 to 100:\n");
    for (int n = 2; n <= 100; ++n) {
        int is_prime = 1;
        for (int d = 2; d * d <= n; ++d) {
            if (n % d == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
         printf("%d\n ", n);
    }
    
    return 0;
}