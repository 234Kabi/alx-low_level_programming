#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];

        for (int j = 0; arg[j] != '\0'; j++) {
            if (!isdigit(arg[j])) {
                printf("Error\n");
                return 1;
            }
        }

        int num = atoi(arg);

        if (num <= 0) {
            printf("Error\n");
            return 1;
        }

        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}