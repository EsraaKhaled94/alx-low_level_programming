#include "main.h"

/**
* print_numbers - Prints the numbers from 0 to 9 followed by a new line.
*
* This function prints the numbers from 0 to 9, each followed by a
* new line. It does not take any arguments and does not return any value.
*/
void print_numbers(void)
{
int number;

for (number = 0; number <= 9 ; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
