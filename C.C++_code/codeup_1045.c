#include <stdio.h>
#include <math.h>

int main(void)
{
  int m, n;
  scanf("%d %d", &m, &n);

  int sum = m+n;
  int minus = m-n;
  int mul = m*n;
  int div = m/n;
  int mod = m % n;
  float d = (float)m/n;
  printf("%d\n%d\n%d\n%d\n%d\n%.2f", sum, minus, mul, div, mod, d);
}