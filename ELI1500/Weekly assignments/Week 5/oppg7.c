#include <stdio.h>

int main(void)
{
  int i, x=1;
  
  for (i=1;i<=10;i++)
  {
    printf("%.10D\n", x);
    x = x*10;
  }
}