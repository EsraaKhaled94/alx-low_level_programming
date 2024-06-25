#include "main.h"

/**
 * _islower - check if letter is lowercase
 * @c: the letter to check if is lowercase letter
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 *
 * Description: print 1 if lowercase else print 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
