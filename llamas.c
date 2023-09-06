#include <stdio.h>
#include <cs50.h>

int main(void)
{
  float startPo = 12;
  int year = 1;
  int i = 1;
  // int po = 0;

  do
  {
    startPo = (13 * startPo) / 12;

  }
  while (startPo <= 13) {
    i++;
  }

  printf("Population of llamas after %i years is %f ", year, startPo);
  printf("\n");
}