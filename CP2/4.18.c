#include<stdio.h>
void graph(int a);
int main(void){
    int a,b,c,d,e,f;
    printf("Enter the values:");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    graph(a);
    graph(b);
    graph(c);
    graph(d);
    graph(e);
    graph(f);
    return 0;

}
void graph(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    printf("\n");
    
}