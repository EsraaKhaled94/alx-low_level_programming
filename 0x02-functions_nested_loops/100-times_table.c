#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the size of the times table.
 *
 * Description: This function prints the n times table in a formatted grid,
 * starting from 0. Each row of the table corresponds to a number multiplied by
 * all numbers from 0 to n. If n is greater than 15 or less than 0,
 * the function does not print anything.
 */

void print_times_table(int n)
{
	int row, col, result;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (row = 0 ; row <= n ; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
				{
					_putchar(' ');
				}
				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result >= 100)
			{
				_putchar(result / 100 + '0');
				_putchar((result % 100) / 10 + '0');
				_putchar((result % 100) % 10 + '0');
			}
			else if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}

		}
		_putchar('\n');
	}
}
