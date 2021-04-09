#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, m, num;
  scanf("%d", &n);
  int *n_ptr = malloc(sizeof(int)*10000001);

  for(int i=0; i<n; i++)
  {
    scanf("%d", &num);
    n_ptr[num] = 1;
  }

  scanf("%d", &m);
  for(int i=0; i<m; i++)
  {
    scanf("%d", &num);
    printf("%d ",n_ptr[num]);
  }

  free(n_ptr);  
  return 0;
}