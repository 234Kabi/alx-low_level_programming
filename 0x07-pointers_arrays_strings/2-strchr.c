#include "main.h"
#include "stdio.h"

/* check if c is at the end of the string 
 * character not found
 */

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

    if (*s == c)
        return s;
    }

    return NULL;
}

