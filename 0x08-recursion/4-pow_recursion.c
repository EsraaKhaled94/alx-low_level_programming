/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: number
 * @y: power
 *
 * Return: n to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
