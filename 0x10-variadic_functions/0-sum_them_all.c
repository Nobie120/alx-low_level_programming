#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of the arguements
 * @n:The 1st arguement
 *
 *
 * Return:The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list first;
	unsigned int sum = 0, i;

	va_start(first, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(first, int);
	va_end(first);


	return (sum);
}
