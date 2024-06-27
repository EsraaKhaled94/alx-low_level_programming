#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 with FizzBuzz rules.
 *
 * This program prints the numbers from 1 to 100. For multiples of
 * three, it prints "Fizz" instead of the number. For multiples of five, it
 * prints "Buzz". For numbers which are multiples of both three and five, it
 * prints "FizzBuzz". Each output is followed by a space.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
		{
			printf(" ");
		}

		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
