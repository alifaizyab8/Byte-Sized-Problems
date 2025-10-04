#include <stdio.h>

long fact(int);

int main() {
    int num;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
    printf("Factorial is %ld\n", fact(num));
    return 0;
}

long fact(int a) {
    long result = 1;
    for (int i = a; i > 0; i--) {
        result = result * i;
    }
    return result;
}
