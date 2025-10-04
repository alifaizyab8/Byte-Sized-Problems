#include<stdio.h>
double pwr(double, int);

int main()
{
    double num = 10.5;
    int n = 1;
    printf("Powered is  %lf", pwr(num, n));

}    

double pwr(double base, int exponent)
{
    double result;
    result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;

    }
    return result;

}