#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers
 * @n: Number of elements of the array to be printed
 *
 * This function takes a pointer to an array of integers and
 * the number of elements to be printed as its parameters
 * It prints the elements of the array separated by commas and a space
 * followed by a new line.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
