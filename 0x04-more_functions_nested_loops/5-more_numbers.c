#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times, followed by new lines.
 *
 * Description: This function prints the numbers from 0 to 14, ten times in total.
 * Each set of numbers is followed by a new line.
 */

void more_numbers(void)
{
	int i, number;
	for (i = 0; i < 10; i++)
	{
		for (number = 0; number <= 14 ; number++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
