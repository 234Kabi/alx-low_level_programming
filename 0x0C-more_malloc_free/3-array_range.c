#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range create an array of int
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: pointer for array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
