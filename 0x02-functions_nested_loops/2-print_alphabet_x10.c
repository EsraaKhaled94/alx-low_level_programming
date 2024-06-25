#include "main.h"

/**
 * print_alphabet - Prints the alphabet 10 times in lowercase, 
 * followed by a new line.
 *
 * Description: This function uses a loop to iterate through the lowercase
 * letters of the alphabet from 'a' to 'z' and prints each character using
 * the _putchar function. After printing all the letters, it prints a newline
 * character. it iterates this process 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0;i < 10;i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}	
		_putchar('\n');
	}
}
