#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * Description: This function prints the 9 times table in a formatted grid,
 * starting from 0 and going up to 9. Each row of the table corresponds to a
 * number multiplied by all numbers from 0 to 9. The results are printed with
 * appropriate spacing to align the columns properly.
 */

void times_table(void)
{
	int row, col, result;

	for (row = 0 ; row < 10 ; row++)
	{
		for (col = 0; col < 10; col++)
		{
			result = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10 && col != 0)
			{
				_putchar(' ');
			}

			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
