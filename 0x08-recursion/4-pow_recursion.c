#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int base = 2;
	int exponent = 5;
	int result = _pow_recursion(base, exponent);

	if (result != -1)
		printf("%d raised to the power of %d is %d\n", base, exponent, result);
	else
		printf("Error: Cannot calculate negative exponent\n");

	return (0);
}
