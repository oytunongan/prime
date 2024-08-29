#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    if ((number < 6) && ((number == 2) || (number == 3) || (number == 5)))
    {
        return true;
    }
    else if ((number > 5) && (((number % 2) * (number % 3) * (number % 5)) != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
