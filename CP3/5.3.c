#include<stdio.h>
#include<math.h>
int main()
{
    float x = 23.0, y = 34.0; 
    float z = 2.34;
    printf("%f\n",sqrt(x));
    printf("%f\n",cbrt(z));
    printf("%f\n",exp(z));
    printf("%f\n",log(z));
    printf("%f\n",log10(z));
    printf("%f\n",fabs(-z));
    printf("%f\n",ceil(z));
    printf("%f\n",floor(z));
    printf("%f\n",pow(x,z));
    printf("%f\n",fmod(x,z));
    printf("%f\n",sin(z));
    printf("%f\n",cos(z));
    printf("%f\n",tan(z));
    return 0;
}