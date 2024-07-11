/**
 * check_if_prime - checks to see if number is prime
 * @a: goes up from 2 to original number
 * @b: original number
 *
 * Return: 1 if prime 0 other wise
 */
int check_if_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: number
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
