#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string
 *
 * Description: This function takes a pointer to a string as its parameter
 * and returns the length of the string, excluding the null terminator.
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
