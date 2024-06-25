#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to find the last digit of
 *
 * Return: The value of the last digit.
 *
 * Description: This function computes and prints
 * the last digit of the integer n.
 * It then returns the value of the last digit. The last digit is obtained by
 * taking the absolute value of n and using the modulus operator (% 10).
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -1 * last_digit;
	}

	_putchar(last_digit);
	return (last_digit);
}
