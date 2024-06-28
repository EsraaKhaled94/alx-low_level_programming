#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 *
 * This function prints an integer using the _putchar function.
 * It handles negative numbers by printing the '-' sign first,
 * then the absolute value of each digit.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
