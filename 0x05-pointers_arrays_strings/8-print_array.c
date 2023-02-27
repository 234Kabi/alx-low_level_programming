#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to print.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}

