#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime(num);


}
void prime(int n)
{
    
    int count = 0;
    if (n == 0 || n == 1)
    {
        printf("Not prime");

    }
    else
    {
        for (int i = 2; i <=  n / 2; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            
        }
        
        if (count == 0)
        {
            printf("Prime");
        }else
        {
            printf("Not Prime");
        }
        
    }
    
}