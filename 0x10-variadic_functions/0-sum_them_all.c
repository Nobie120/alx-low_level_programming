#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of the arguements
 * @n:The 1st arguement
 * @...:The intergers to add
 *
 * Return:The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list first;

	if (!n)
		return (0);
	va_start(first, n);

	while (i--)
		sum += va_arg(first, int);

	va_end(first);

	return (sum);
}
