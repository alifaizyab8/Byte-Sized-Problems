#include<stdio.h>
#include<math.h>
int main(){


double l1= 10.85, l2 = -0.678, l3 = 9.324, l4 = 0.0, l5 = -34.87, l6 = -9.5;

double x = fabs(l1);
double xa = floor(l1);
double xb = fabs(l2);
double xc = ceil(l3);
double xd = fabs(l4);
double xe = ceil(l5);
double xf = ceil(-fabs(-12-floor(l6)));
printf("%lf\n",x);
printf("%lf\n",xa);
printf("%lf\n",xb);
printf("%lf\n",xc);
printf("%lf\n",xd);
printf("%lf\n",xe);
printf("%lf",xf);
}