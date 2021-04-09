#include <stdio.h>

int main(void)
{
  int n;
  input:
    scanf("%d ", &n);
    if(n == 0) return 0; 
    printf("%d\n", n);
    if(n != 0) goto input;
}