#include "main.h"
#include <string.h>

/**
 * main -Entry point
 * print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myString[] = "_putchar";
	int i;

	for (i = 0; i < (int) strlen(myString); i++)
	{
		_putchar(myString[i]);
	}
	_putchar('\n');
	return (0);
}
