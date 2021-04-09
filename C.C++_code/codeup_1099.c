#include <stdio.h>

int main()
{
  int i, j;
  int arr[10][10];
  int x = 1;
  int y = 1;

  for(i=0; i<10; i++)
  {
    for(j=0; j<10; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  while(arr[x+1][y] != 1 || arr[x][y+1] != 1)
  {
    if(arr[1][1] == 2)
    {
      arr[1][1] = 9;
      break;
    }
    else
    {
      arr[1][1] = 9;
    }
    
    if(arr[x][y+1] == 0)
    {
      arr[x][y+1] = 9;
      y++;
    }
    else if(arr[x][y+1] == 2)
    {
      arr[x][y+1] = 9;
      break;
    }
    else if(arr[x][y+1] == 1)
    {
      if(arr[x+1][y] == 2)
      {
        arr[x+1][y] = 9;
        break;
      }
      else if(arr[x+1][y] == 0)
      {
        arr[x+1][y] = 9;
        x++;
      }
    }
  }

  for(i=0; i<10; i++)
  {
    for(j=0; j<10; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
