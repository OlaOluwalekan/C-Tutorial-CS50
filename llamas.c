#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int startPo = get_int("What is the starting population: ");
  int targetPo = get_int("What is ending population: ");
  int year = 0;
  int i = 1;

  while (startPo < targetPo)
  {
      // float pow = 1;
      // for (int j = 0; j <= year; j++)
      // {
      //     pow *= (13 / 12);
      // }
      startPo += (startPo / 12);
      // printf("%i\n", startPo);
      year++;
  }

  // do {
  //   float pow = 1;
  //   for (int j = 1; j <= i; j++) {
  //     pow *= (13 / 12);
  //   }
  //   startPo = pow * startPo;
  //   i++;
  // } while (startPo <= targetPo);

  // while (i <= year) {
  //   startPo = (13 * startPo) / 12;
  //   i++;
  // }

  // printf("Population of llamas after %i years is %f ", year, startPo);
  printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
  printf("\n");
}