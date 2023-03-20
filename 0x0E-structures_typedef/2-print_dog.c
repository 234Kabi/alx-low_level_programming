#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: ");
    if (d->name == NULL)
        printf("(nil)\n");
    else
        printf("%s\n", d->name);

    printf("Age: ");
    printf("%.6f\n", d->age);

    printf("Owner: ");
    if (d->owner == NULL)
        printf("(nil)\n");
    else
        printf("%s\n", d->owner);
}

