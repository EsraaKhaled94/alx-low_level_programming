#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * This function prints a diagonal line using the character '\'
 * repeated 'n' times. Each '\' character is preceded by spaces to create the
 * diagonal effect. If 'n' is 0 or less, it simply prints a newline character.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1 ; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}

			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
