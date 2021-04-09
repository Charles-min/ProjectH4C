#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  int **ptr = malloc(sizeof(int*)*27);
  int **n_g = malloc(sizeof(int*)*27);
  for(i=0; i<27; i++)
  {
    ptr[i] = malloc(sizeof(int)*27);
    n_g[i] = malloc(sizeof(int)*27);
  }

  for(i=1; i<26; i++)
  {
    for(j=1; j<26; j++)
    {
      scanf("%d", &ptr[i][j]);
      n_g[i][j] = 0;
    }
  }

  for(i=1; i<26; i++)
  {
    for(j=1; j<26; j++)
    {
      n_g[i][j] = ptr[i-1][j-1]+ptr[i-1][j]+ptr[i-1][j+1]+ptr[i][j-1]+ptr[i][j+1]+ptr[i+1][j-1]+ptr[i+1][j]+ptr[i+1][j+1];
      if(ptr[i][j] == 0)
      {
        n_g[i][j] = n_g[i][j] == 3?1 :0;
      }
      else
      {
        n_g[i][j] = (n_g[i][j]>=4 || n_g[i][j]<=1) ? 0 :1;
      } 
    }
  }
  for(i=1; i<26; i++)
  {
    for(j=1; j<26; j++)
    {
      printf("%d ", n_g[i][j]);
    }
    printf("\n");
  }
  for (i=0; i<25; i++)
    {
      free(ptr[i]);
      free(n_g[i]);   
    }
    free(ptr);    
    free(n_g);

    return 0;
}
