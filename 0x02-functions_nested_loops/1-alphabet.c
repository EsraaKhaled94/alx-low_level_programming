#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses a loop to iterate through the lowercase
 * letters of the alphabet from 'a' to 'z' and prints each character using
 * the _putchar function. After printing all the letters, it prints a newline
 * character.
 */

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
