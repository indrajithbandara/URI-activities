#include <stdio.h>

int main  ()
{
  int cod, quant, i;
  double val, total = 0;
  for (i = 0; i < 2; i++)
  {
    scanf("%i %i %lf", &cod, &quant, &val);
    total += quant * val;
  }
  printf("VALOR A PAGAR: R$ %.2lf\n", total);
  return 0;
}

