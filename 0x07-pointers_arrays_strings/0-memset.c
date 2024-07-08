/**
 * _memset - fills memory with a constant byte.
 * @s: area to fill
 * @b: character to fill area
 * @n: length
 *
 * Return: area after filling data
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
