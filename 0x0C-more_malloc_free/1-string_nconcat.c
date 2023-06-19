#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  *string_nconcat - concatenates n bytes of a string too another string
 *  @s1: string to append to 
 *  @s2: string concatenate from
 *  @n: number of bytes from s2 to concatenate to s1
 *  Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 unsigned int len_s1 = 0;
    unsigned int len_s2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);

    if (n >= len_s2)
        n = len_s2;

    char *result = malloc(sizeof(char) * (len_s1 + n + 1));

    if (result == NULL)
        return NULL;

    strcpy(result, s1);
    strncat(result, s2, n);

    return result;
}