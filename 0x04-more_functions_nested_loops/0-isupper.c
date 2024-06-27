#include "main.h"

/**
 * _isupper - checks if the characteris upper case
 * @c: the character to check
 * Return : 1 if c is uppercase, 0 otherwise
 *
 * Description: This function takes an integer input, which is typically the ASCII
 * value of a character, and determines if it corresponds to an uppercase
 * letter ('A' through 'Z'). If the character is uppercase, the function
 * returns 1. Otherwise, it returns 0.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
