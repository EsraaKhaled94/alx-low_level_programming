#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
 * followed by a new line.
 *
 * Description: This function uses a loop to iterate 10 times then there's
 * internal loop through the lowercase letters of the alphabet from 'a' to 'z'
 * and prints each character using the _putchar function. 
 * After printing all the letters, it prints a newline character.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
