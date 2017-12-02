#include<stdio.h>

int main() {
int n,i,fat = 1;
scanf("%d",&n);
for(i= 0,fat = 1;i < n;i++) 
{
fat*=n-i;
}
printf("\n%d",fat);
return 0;
}
