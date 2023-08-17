#include "variadic_functions.h"

/**
 * print_strings - Function that print strings
 * @n:Number of arguements(strings)
 * @separator:Seperates the strings
 * @...:The strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list op;

	va_start(op, n);

	while (i--)
	{
		char *s = va_arg(op, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i != 0)
			printf("%s", separator);
	}
	va_end(op);
	printf("\n");
}
