#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed
 *
 * This function takes a pointer to a string as its parameter
 * and prints the second half of the string, followed by a new line. If the
 * number of characters is odd, it prints the last (length_of_the_string - 1) / 2
 * characters.
 */

void puts_half(char *str)
{
	int length = 0, half_count, index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 ==0)
	{
		half_count = length / 2;
	}
	else
	{
		half_count = (length - 1) / 2;
	}

	for (index = half_count; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
