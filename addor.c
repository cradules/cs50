#include <cs50.h>
#include <stdio.h>

int main(void)
    {
        printf("x is: ");
        int x = get_int();

        printf("y is: ");
        int y = get_int();

        printf("%i plus %i is %i\n", x, y, x + y);
        printf("%i minus %i is %i\n", x, y, x - y);
        printf("%i times %i is %i\n", x, y, x * y);
        printf("%i divided by %i is %i\n", x, y, x / y);
        printf("reminder of %i and %i  is %i\n", x, y, x % y);
    }