#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic (uppercase or lowercase).
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 *
 * Description: This function checks if the character c is within the range
 * 'a' to 'z' or 'A' to 'Z', inclusive, indicating that it is an alphabetic
 * character. It returns 1 if c is alphabetic, and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
