#include <stdio.h>
int main()
{
    int orig_num;
    printf("Enter a number: ");
    scanf("%d",&orig_num);
    int num = orig_num;
    int rev_num = 0;
    while (num != 0)
    {
        int single_num = num % 10;
        rev_num = rev_num * 10 + single_num;
        num /= 10;
        ;

    }
    if (rev_num == orig_num)
    {
        printf(" %d is a Palindrome", orig_num);
    }
    else
    {
        printf(" %d is not a Palindrome", orig_num);
    }
    return 0;
}
