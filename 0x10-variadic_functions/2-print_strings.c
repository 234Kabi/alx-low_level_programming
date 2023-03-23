#include "variadic_functions.h"

/**
 * This function takes in a separator string and a variable number of strings,
 *  prints out all the strings separated by the given separator string.
 *  Define a pointer to a char (i.e. a string) and a counter variable.
 *  Declare a va_list variable which holds information about the variable arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	// Initialize the va_list variable with the variable argument list and the number of arguments.
	va_start(ap, n);

	// If the separator string is NULL, set it to an empty string.
	if (separator == NULL)
	{
		separator = "";
	}

	// Loop through all the strings passed in as arguments.
	for (i = 0; i < n; i++)
	{
		// Get the next string from the variable argument list.
		str = va_arg(ap, char*);

		// If the string is NULL, replace it with the string "(nil)".
		if (str == NULL)
		{
			str = "(nil)";
		}

		// Print out the string.
		printf("%s", str);

		// If this is not the last string, print out the separator string.
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	// Print a newline character at the end.
	printf("\n");

	// Clean up the va_list variable.
	va_end(ap);
}
