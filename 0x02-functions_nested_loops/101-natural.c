#include <stdio.h>

/**
 * main - Entry point
 *
 * iterates through all natural numbers below 1024
 * and sums up those that are multiples of either 3 or 5. The result is then
 * returned.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number, sum = 0;

	for (number = 0; number < 1024 ; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{

			sum += number;
		}
	}
	printf("%d\n", sum);
	return (0);
}
