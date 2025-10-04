#include<Stdio.h>
int largest(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Largest number is %d",largest(a,b,c));
}
int largest(int x,int y,int z)
{
    if(x>=y && x>=z)
        return x;
    else if(y>=x && y>=z)
        return y;
    else
        return z;
}