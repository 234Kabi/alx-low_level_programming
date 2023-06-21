#include <stdio.h>

/**
 * print_name - function to print name
 * @f: variable to hold string name
 * @name: name of person
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return 0;
	f(name);
}