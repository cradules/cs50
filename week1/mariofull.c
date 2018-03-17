#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, y, i, z, w;
    do
    n = get_int();
    while(n<0 || n>23); //the loop will continue promt for input as long the input is less then 0 and bigger than 23

    for (i=0; i<n; i++) //Main loop that will decide the piramid hight
    {

        for (y=0; y<n-i; y++) //the secound loop that will print the number of spaces
        printf(" ");
        for (z=0; z<=i; z++) //the third loop that will print the left priramid
        printf("#");
        printf("  ");
        for (w=0; w<=i; w++) //the forth loop that will print the right piramid
        printf("#");
        printf("\n");
    }
}


