#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n or -1 if no natural square root exists.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return -1;

	return (guess * guess == n) ? guess : sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	return sqrt_helper(n, 1);
}
