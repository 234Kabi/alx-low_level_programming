#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, n = 0;
	float f = 0.0;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				// print a char
				printf("%c", va_arg(ap, int));
				break;

			case 'i':
				// print an integer
				printf("%d", va_arg(ap, int));
				break;

			case 'f':
				// print a float
				printf("%f", va_arg(ap, double));
				break;

			case 's':
				// print a string
				s = va_arg(ap, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;

			default:
				// ignore other characters
				break;
		}

		// print a separator if there are more arguments to come
		n = 0;
		while (format[i + n + 1] && (format[i + n + 1] == 'c' || format[i + n + 1] == 'i' || format[i + n + 1] == 'f' || format[i + n + 1] == 's'))
		{
			n++;
		}
		if (n > 0)
		{
			printf(", ");
		}

		// move to the next argument
		i++;
	}

	va_end(ap);
	printf("\n");
}

