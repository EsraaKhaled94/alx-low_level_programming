#include <stdarg.h>
/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
