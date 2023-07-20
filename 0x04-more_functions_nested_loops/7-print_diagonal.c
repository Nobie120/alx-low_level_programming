#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n:the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
