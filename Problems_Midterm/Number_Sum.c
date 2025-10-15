#include <stdio.h>
int rev_num(int);
void Sep_Digit(int);
int sum_Digit(int);
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    Sep_Digit(rev_num(n));
    
}
int sum_Digit(int n)
{
    int digit;
    int sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

void Sep_Digit(int n)
{
    int digit;
    printf("The digits are:\n");
    while (n > 0)
    {
        digit = n % 10;
        printf(" %d,", digit);
        n /= 10;
    }
}

int rev_num(int n)
{
    int digit, rev = 0;
    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}