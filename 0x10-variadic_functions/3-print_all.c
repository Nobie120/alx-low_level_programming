#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format:a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i  = 0;
	va_list value;
	char *s, *sep = "";

	va_start(value, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(value, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(value, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(value, double));
					break;
				case 's':
					s = va_arg(value, char *);

					if (!s)
						printf("(nil)");
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(value);

	printf("\n");
}
