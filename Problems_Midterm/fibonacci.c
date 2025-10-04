#include<stdio.h>
void fib(int);
int main()
{
    int term = 10;
    fib(term);

}
void fib(int t)
{
    int a,b,c,swap;
    a = 0;
    b = 1;
    printf("0\n");
    printf("1\n");
    for (int i = 0; i < t-2; i++)
    {
        c = a + b;
        printf("%d\n",c); 
        swap = b;
        b = c;
        a = swap;
    }
    
}