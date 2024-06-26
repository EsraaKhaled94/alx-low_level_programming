#include <stdio.h>

/**
 * sum_multiples - Computes and prints the sum of
 * all multiples of 3 or 5 below 1024.
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
	printf("%d", sum);
	return (0);
}
