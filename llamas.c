#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int startPo = 12;
  int year = 1;
  int i = 1;
  int po;

  while (i <= year) {
    po = (13 * startPo)/12;
    startPo = po;
  }

  printf("Population of llamas after %i years is %i ", year, po);
  printf("\n");
}