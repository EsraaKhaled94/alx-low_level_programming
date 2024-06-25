#include "main.h"

/**
 * print_sign - prints sign of input number
 * @n: input number
 *
 * Return: returns 1 if number is positive, 0 if number is zero,
 * -1 if number is negative
 *
 * Description: This function checks the sign of the
 * integer n and prints the corresponding
 * sign character ('+', '0', or '-') to standard output.
 * It then returns an integer based on the sign of n as described:
 *   - Returns 1 and prints '+' if n is greater than zero.
 *   - Returns 0 and prints '0' if n is zero.
 *   - Returns -1 and prints '-' if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}

}
