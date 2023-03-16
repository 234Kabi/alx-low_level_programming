#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: pointer to allocate memory to print
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
