#include <stddef.h>

/**
 * print_name - a function that prints a name.
 * @name: the name given
 * @f: function of name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
