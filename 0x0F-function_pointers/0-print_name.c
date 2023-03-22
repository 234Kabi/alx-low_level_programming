#include <stdio.h>

/**
 * print_name_as_is - a function that prints a name as is.
 * @name: Kabi
 * @f: function of name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}

