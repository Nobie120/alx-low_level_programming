#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @i: The number whos last digit will be printed
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;
	if (ld < 0)
		ld = -ld;
	_putchar('0' + ld);
	return (ld);
}
