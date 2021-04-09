#include <stdio.h>
#include <math.h>

int main(void)
{
  float h, b, c, s;
  scanf("%f %f %f %f", &h, &b, &c, &s);
  float mul = (h*b*c*s)/pow(2, 23);
  printf("%.1f MB", mul);
}

