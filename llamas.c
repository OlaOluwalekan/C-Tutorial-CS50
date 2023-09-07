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
        if (startPo < 9)
        {
            printf("minimum starting population is 9\n");
        }
    } while (startPo < 9);

    do
    {
        targetPo = get_int("What is ending population: ");
        if (targetPo < startPo)
        {
            printf("Target population cannot be less than start population\n");
        }
    } while (targetPo < startPo);

    int year = 0;

    while (startPo < targetPo)
    {

        startPo += (startPo / 3) - (startPo / 4);

        year++;
    }

    printf("Number of years for llamas to reach %i population is: %i", targetPo, year);
    printf("\n");
}