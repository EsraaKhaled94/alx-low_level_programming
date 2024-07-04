/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string to which the source string is appended
 * @src: The source string to be appended to the destination string
 * @n: The maximum number of bytes to be appended from src
 *
 * Description: This function appends the src string to the dest string,
 * using at most n bytes from src. The src string does not need to be
 * null-terminated if it contains n or more bytes. The resulting string
 * in dest will always be null-terminated.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, j = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}
		dest[length] = src[j];
		j++;
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
