#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:Sepeartes the numbers
 * @n:Number of numbers
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list op;

	va_start(op, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	while (i--)
	{
		if (!separator)
			printf("%d", va_arg(op, int));
		else
		{
			printf("%d", va_arg(op, int));
			if (i != 0 && separator)
				printf("%s", separator);
		}
	}
	va_end(op);
	printf("\n");
}
