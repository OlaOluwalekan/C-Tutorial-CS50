#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int startPo;
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

  unrounded = (float) startPo / 4;

  startPo = floor(startPo / 4);

  printf("%i : %f", startPo, unrounded);

//   while (startPo < targetPo)
//   {
//     //   startPo += (startPo / 12);
//       startPo += floor(startPo / 3);
//       startPo -= floor(startPo / 4);
//       year++;
//   }

  // printf("Population of llamas after %i years is %f ", year, startPo);
//   printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
  printf("\n");
}