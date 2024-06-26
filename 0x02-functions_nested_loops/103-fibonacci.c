#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * computes the sum of even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4000000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, following, sum = 0;

	while (fib1 < 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		following = fib1 + fib2;
		fib1 = fib2;
		fib2 = following;
	}
	printf("%lu\n", sum);
	return (0);
}
