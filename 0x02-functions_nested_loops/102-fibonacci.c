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
	int i;
	unsigned long fib1 = 1, fib2 = 2, following;

	printf("%lu, %lu", fib1, fib2);
	for (i = 0; i < 48; i++)
	{
		//we will be printing 48 fib numbers as we already printed the first two
		following = fib1 + fib2;
		printf(" ,%lu", following);
		fib1 = fib2;
		fib2 = following;
	}
	printf("\n");
	return (0);
}
