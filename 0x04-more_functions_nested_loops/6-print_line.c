#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * This function prints a line consisting of the character '_',
 * repeated 'n' times. If 'n' is 0 or less,
 * it simply prints a newline character.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
