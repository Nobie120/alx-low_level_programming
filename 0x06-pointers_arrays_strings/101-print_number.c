#include "main.h"

/**
 * print_number - prints integers
 * @n:Integer to be printed
 */

void  print_number(int n)
{
	int i = 1, num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / i >= 10)
		i *= 10;

	while (i != 0)
	{
		_putchar((num / i) + '0');
		num %= i;
		i /= 10;
	}
}
