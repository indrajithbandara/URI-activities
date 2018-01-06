#include <stdio.h>
int main()
{
  char employee[51];
  double salary, total, sold;
  scanf("%50s %lf %lf", employee, &salary, &sold);
  total = salary + sold * 0.15;
  printf("TOTAL = R$ %.2lf\n", total);
  return 0;
}
