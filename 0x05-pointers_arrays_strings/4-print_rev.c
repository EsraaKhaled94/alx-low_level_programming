#include "main.h"



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
