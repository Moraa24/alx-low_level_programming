#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		write(1, "\n", 1); /* Print a new line */
		return;
	}

	write(1, s, 1); /* Print the current character */
	_puts_recursion(s + 1);
}
