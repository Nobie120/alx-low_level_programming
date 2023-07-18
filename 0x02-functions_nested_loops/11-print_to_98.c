#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n:The first number
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else if (i > 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else if (i >= 100)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
			}
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (i >= 100)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
			}
			else if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}
	}
}
