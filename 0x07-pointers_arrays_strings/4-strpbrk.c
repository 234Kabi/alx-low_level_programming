#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
    if (s == NULL || accept == NULL) {
        return NULL;
    }

    while (*s != '\0') {
        char *a = accept;
        while (*a != '\0') {
            if (*s == *a) {
                return s;
            }
            a++;
        }
        s++;
    }

    return NULL; /* no matching byte found */
}

