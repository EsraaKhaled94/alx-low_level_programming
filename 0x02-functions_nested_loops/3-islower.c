#include "main.h"

/**
 * _islower - check if letter is lowercase
 *
 * Description: print 1 if lowercase else print 0
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
