#include "main.h"

/**
 * main - check the code
 * prints alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z';letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
