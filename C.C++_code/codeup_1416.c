#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  int size = 31;

  scanf("%d", &n);
  
  int *bin = malloc(sizeof(int)*size);
  int pos= 0;
  while(1)
  {
    bin[pos] = n % 2;
    n = n / 2;
    pos++;

    if (n == 0)
    {
      break;
    }
  }
  for(int i = pos-1; i >=0; i--)
  {
    printf("%d", bin[i]);
  }
  printf("\n");
  
  free(bin);
  return 0;
}