#include <stdio.h>
#include <cs50.h>

int main(void)
{
//read/check user input to be a valid number higer than 0
    double n, sum, quater, dime, nickel, penny;
    int i;
    do
    {
        n = get_float();
    }while(n<=0);


quater=25;
dime=10;
nickel=5;
penny=1;
i=0;
sum = n*100;
printf("Your sum in cents is %f\n", sum);

        while (quater<=sum) // if sum is higher then a quater then increment coins (i)
        {
            i++;
            sum = sum - quater;
        }

         while (dime<=sum && quater>sum) //if
        {
            i++;
            sum = sum - dime;
        }

        while (nickel<=sum && dime>sum)
        {
            i++;
            sum = sum - nickel;
        }

        while (penny<=sum &&  nickel>sum)
        {
            i++;
            sum = sum - penny;
        }
     printf ("Here are %i coins\n", i);
}
