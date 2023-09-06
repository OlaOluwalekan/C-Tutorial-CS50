#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int startPo = 12;
  int year = 1;
  int i = 1;
  // int po = 0;

  while (i <= year) {
    startPo = (13 * startPo) / 12;
    i++;
  }

  printf("Population of llamas after %i years is %i ", year, startPo);
  printf("\n");
}