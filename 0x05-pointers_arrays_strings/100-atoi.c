#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int started = 0

	while (*s == ' ' || *s == '\t')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		started = 1; // Set flag that we are parsing digits
		int digit = *s - '0';

		// Check for integer overflow before adding new digit
		if (num > (INT_MAX - digit) / 10)
		{
			// Handle overflow by returning closest limit
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		num = num * 10 + digit;
		s++;
	}
       	// If no digits were parsed, return 0 as per requirements  if (!started)
        return 0;

	return num * sign;
}
