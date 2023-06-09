#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{for i in range(len(s)):
    if s[i] == '-':
        d += 1

    if '0' <= s[i] <= '9':
        digit = int(s[i])
        if d % 2:
            digit = -digit
        n = n * 10 + digit
        f = 1
        if not ('0' <= s[i + 1] <= '9'):
            break
        f = 0
    i += 1


	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

input1 = int(argv[1])
input2 = int(argv[2])
product = input1 * input2

	printf("%d\n", result);

	return (0);
}