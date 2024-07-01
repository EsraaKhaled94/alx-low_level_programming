#include "main.h"


/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse
 *
 * Description: This function takes a pointer to a string as its parameter
 * and prints the string in reverse order followed by a new line to the
 * standard output.
 */

void print_rev(char *s)
{
	int index;

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
