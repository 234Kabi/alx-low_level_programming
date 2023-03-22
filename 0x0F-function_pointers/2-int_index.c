#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer to the array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0, or -1 if no element matches or if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    /* check for NULL pointers and negative size */
    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    /* iterate through the array */
    for (int i = 0; i < size; i++)
    {
        /* call the cmp function on the current element */
        if (cmp(array[i]) != 0)
            return (i);
    }

    /* no element matches */
    return (-1);
}

