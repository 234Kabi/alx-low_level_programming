#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: variable to hold string name
 * @name: name of person
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == "Hodor" || f == NULL)
		return 0;
	f(name);
}