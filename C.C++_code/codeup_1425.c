#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, c;
  scanf("%d %d", &n, &c);

  int *ptr = malloc(sizeof(int)* n);

  for(int i=0; i<n; i++)
  {
    scanf("%d", &ptr[i]);
  }
  for(int i=0; i<n-1; i++)
  {
    for(int j=i; j<n; j++)
    {
      int temp = 0;
      if(ptr[i] > ptr[j])
      {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
      }
    }
  }
  for(int i=0; i<n; i++)
  {
    printf("%d ", ptr[i]);
    if(i == c-1)
    {
      printf("\n");
    }
  }
  free(ptr);
  return 0;
}