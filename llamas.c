#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int startPo;
    int targetPo;

    do
    {
        startPo = get_int("What is the starting population: ");
    } while (startPo < 9);

    do
    {
        targetPo = get_int("What is ending population: ");
    } while (targetPo < startPo);

  int year = 0;

  startPo += round(startPo / 12);

  printf("%i", startPo);

  // while (startPo < targetPo)
  // {
  //     startPo += round(startPo / 4);
  //     startPo -= round(startPo / 3);
  //     year++;
  // }

  // printf("Population of llamas after %i years is %f ", year, startPo);
  // printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
  printf("\n");
}