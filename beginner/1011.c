#include<stdio.h>

#define PI 3.14159

int main ()  
{
double  VOLUME,R;
scanf("%lf",&R);
VOLUME = (4.0/3.0)* 3.14159 * R * R * R;
printf("VOLUME = %.3lf\n",VOLUME);
return 0;
}
