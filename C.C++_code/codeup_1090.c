#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, r, n;
  scanf("%d %d %d", &a, &r, &n);
  float s = a*(pow(r, n-1));
  printf("%0.lf", s);
}
