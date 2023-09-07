#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int startPo;
    int targetPo;
    int currentPo;

    do
    {
        startPo = get_int("What is the starting population: ");
    } while (startPo < 9);

    do
    {
        targetPo = get_int("What is ending population: ");
    } while (targetPo < startPo);

    int year = 0;

    currentPo = startPo;

    while (startPo < targetPo)
    {
        // currentPo += startPo / 3;
        // printf("%i : ", currentPo);
        // currentPo -= startPo / 4;
        // printf("%i ", currentPo);

        // if (currentPo == startPo) {
        //     printf("%i : %i\n", currentPo, startPo);
        //     break;
        // }

        // startPo = currentPo;

        startPo += (startPo / 3) - (startPo / 4);

        year++;
    }

    printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
    printf("\n");
}