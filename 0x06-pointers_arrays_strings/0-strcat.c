/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which the source string is appended
 * @src: The source string to be appended to the destination string
 *
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte at the end of the concatenated string.
 * 
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, j = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (; src[j] != '\0' ; j++ , length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';

	return (dest);
}
