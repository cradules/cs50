#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, y, i, z;
    do
    n = get_int();
    while(n<0 || n>23); //the loop will continue promt for input as long the input is less then 0 and bigger than 23

    for (i=0; i<n; i++) //Main loop that will decide the piramid hight
    {

        for (y=0; y<n-i-1; y++) //the secound loop that will print the number of spaces
        printf(" ");
        for (z=0; z<i+2; z++) //the third loop that will print the number #
        printf("#");
        printf("\n");
    }
}


