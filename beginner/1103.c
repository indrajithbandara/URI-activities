#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int h1, h2, m1, m2, result, day_min = 1440;

  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  m1 += h1 * 60;
  m2 += h2 * 60;

  if (m2 < m1)
  {
    result = day_min - m1 + m2;
  }
  else
    result = m2 - m1;

  printf("%d", result);

  return 0;
}
