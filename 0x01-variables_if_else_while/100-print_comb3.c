#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tenth, units;

	for (tenth = 0; tenth < 9 ; tenth++)
	{
		for (units = tenth + 1; units < 10 ; units++)
		{
			putchar(tenth + '0');
			putchar(units + '0');
			if (tenth != 8 && units != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
