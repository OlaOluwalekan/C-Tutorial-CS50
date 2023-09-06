#include <stdio.h>
#include <cs50.h>

int main(void)
{
  float startPo = 12;
  int year = 20;
  int i = 1;
  int targetPo = 13;
  // int po = 0;

  do {
    float pow = 1;
    for (int j = 1; j <= i; j++) {
      pow *= (13 / 12);
    }
    startPo = pow * startPo;
    i++;
  } while (startPo <= targetPo);

  // while (i <= year) {
  //   startPo = (13 * startPo) / 12;
  //   i++;
  // }

  // printf("Population of llamas after %i years is %f ", year, startPo);
  printf("Number of years for llamas to reach %i population is: %i", targetPo, i);
  printf("\n");
}