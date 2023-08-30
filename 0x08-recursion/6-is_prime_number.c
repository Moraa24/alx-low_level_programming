#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0); /* Not prime */
    }

    if (n <= 3)
    {
        return (1); /* 2 and 3 are prime */
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return (0); /* Divisible by 2 or 3, not prime */
    }

    int i;
    for (i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return (0); /* Divisible, not prime */
        }
    }

    return (1); /* Prime */
}
