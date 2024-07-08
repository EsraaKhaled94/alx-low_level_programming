/**
 * _memcpy - copies memory area
 * @dest : destination area
 * @src : source area
 * @n: size of memory
 *
 * Returns: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
