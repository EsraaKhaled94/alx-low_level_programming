#include "main.h"

/**
 * jack_bauer - Prints every minute of the day in the format 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int mins, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');

			_putchar(':');

			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
