#include <cs50.h>
#include <stdio.h>

int factorial(int number);

int main(void)
{
    // Prompt for a number
    int n = get_int("Enter a number: ");
    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    int total;

    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
