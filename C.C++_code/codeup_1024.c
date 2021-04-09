#include <stdio.h>

int main(void)
{
  char d[30];
  scanf("%s", d);
  for(int i=0; d[i]!='\0'; i++)
  {
    printf("\'%c\'\n", d[i]);
  }
}