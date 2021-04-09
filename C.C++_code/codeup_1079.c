#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char c;
  while(1)
  {
    scanf("%c ", &c);
    if(c != 'q')
    {
      printf("%c\n", c);
    }
    else
    {
      printf("q");
      return 0;
    }
  }
}
