// get_int and printf with %i

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("integer: ");
    printf("hello, %i\n", i);
}
