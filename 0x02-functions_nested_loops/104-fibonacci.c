#include "main.h"

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int i;
	unsigned int j = 1, k = 2;
	unsigned int num, digit, temp, divisor;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');

	for (i = 3; i <= 98; i++)
	{
		num = j + k;
		j = k;
		k = num;

		_putchar(',');
		_putchar(' ');

		temp = num;
		divisor = 1;
		while (temp > 9)
		{
			divisor *= 10;
			temp /= 10;
		}

		while (divisor > 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			 num %= divisor;
			divisor /= 10;
		}
	}

	_putchar('\n');
	return (0);
}
