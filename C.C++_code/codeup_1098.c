#include <stdio.h>

int main(void)
{
  int h, w, n;
  int l, d, x, y;

  scanf("%d %d", &h, &w);
  int a[h][w];
  scanf("%d", &n);
  int list[n][4];
  for(int i=0; i<h; i++)
  {
    for(int j=0; j<w; j++)
    {
      a[i][j] = 0;
    }
  }
  for(int i=0; i<n; i++)
  {
     for(int j=0; j<4; j++)
     {
       scanf("%d", &list[i][j]);
     }
     l = list[i][0];
     d = list[i][1];
     x = list[i][2];
     y = list[i][3];
     if(d != 0)
     {
       for(int k=0; k<l; k++)
       {
         a[x-1+k][y-1] = 1;
       }
     }
     else
     {
       for(int k=0; k<l; k++)
       {
          a[x-1][y-1+k] = 1;
       }
     }
  }
  for(int i=0; i<h; i++)
  {
    for(int j=0; j<w; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
