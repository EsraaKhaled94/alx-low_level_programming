#include <stdio.h>

/**
 * main - Entry point
 * prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tenth, units;

	for (hundreds = 0; hundreds < 8; hundreds++)
	{
		for (tenth = hundreds + 1; tenth < 9 ; tenth++)
		{
			for (units = tenth + 1; units < 10 ; units++)
			{
				putchar(hundreds + '0');
				putchar(tenth + '0');
				putchar(units + '0');
				if (hundreds == 7 && tenth == 8 && units == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
