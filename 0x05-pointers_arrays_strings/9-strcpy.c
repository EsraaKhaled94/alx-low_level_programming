#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * This function copies the string pointed to by src
 * including the terminating null byte ('\0')
 * to the buffer pointed to by dest.
 *
 * Return: Pointer to dest (same as dest)
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
