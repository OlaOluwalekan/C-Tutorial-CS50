#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float startPo;
    int targetPo;
    float unrounded;

    do
    {
        startPo = get_int("What is the starting population: ");
    } while (startPo < 9);

    do
    {
        targetPo = get_int("What is ending population: ");
    } while (targetPo < startPo);

  int year = 0;

  // unrounded = (float) startPo / 12;

  // startPo = round(startPo / 12);

  // printf("%i : %f", (int)startPo, unrounded);

  while (startPo < targetPo)
  {
      startPo += (startPo / 12);
    //   startPo += round(startPo / 12);
      // startPo -= round(startPo / 3);
      year++;
  }

  // printf("Population of llamas after %i years is %f ", year, startPo);
  printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
  printf("\n");
}