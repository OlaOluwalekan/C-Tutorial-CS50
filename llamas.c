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

    while (startPo < targetPo)
    {
        startPo += floor(startPo / 3);
        startPo -= floor(startPo / 4);
        year++;
    }

    printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
    printf("\n");
}