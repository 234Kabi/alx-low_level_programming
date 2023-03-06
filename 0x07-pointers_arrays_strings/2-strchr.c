#include "main.h"
#include "stdio.h"

char *_strchr(char *s, char c)
{
    if (s == NULL) {
        return NULL;
    }

    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    if (*s == c) { /* check if c is at the end of the string */
        return s;
    }

    return NULL; /* character not found */
}

