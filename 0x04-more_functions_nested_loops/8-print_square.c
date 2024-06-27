#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 * @size: The size of the square.
 *
 * This function prints a square using the character '#'. The size
 * of the square is determined by the input parameter 'size'. If 'size' is 0 or
 * less, the function prints only a new line.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
