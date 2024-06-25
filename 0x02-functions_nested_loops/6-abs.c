#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer number
 *
 * Return: The absolute value of n.
 *
 * Description: This function computes the absolute value of the integer n
 * and returns it. If n is negative, it returns the positive equivalent of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
