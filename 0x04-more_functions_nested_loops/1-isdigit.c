#include "main.h"

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * This function takes an integer input, which is typically the ASCII
 * value of a character, and determines if it corresponds to a digit
 * ('0' through '9'). If the character is a digit, the function returns 1.
 * Otherwise, it returns 0.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
