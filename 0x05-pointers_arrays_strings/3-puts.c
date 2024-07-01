#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string as its parameter
 * and prints the string followed by a new line to the standard output.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
