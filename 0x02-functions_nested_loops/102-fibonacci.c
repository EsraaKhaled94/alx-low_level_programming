#include <stdio.h>

/**
 * main - Entry point
 *
 * print the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i, fib1 = 1, fib2 = 2, following;

	printf("%d, %d", fib1, fib2);
	for (i = 0; i < 50; i++)
	{
		following = fib1 + fib2;
		printf(" ,%d", following);
		fib1 = fib2;
		fib2 = following;
	}
	printf("\n");
	return (0);
}
