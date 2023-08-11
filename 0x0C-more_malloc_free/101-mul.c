#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str:Thes string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _atoi - converts string to interger
 * @s:the string
 * Return:The interger
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first, i;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
		{
			sign *= -1;
		}
	}

	for (i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints interger
 * @n:The int
 * Return: 0
 */

void print_int(int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
/**
 * main - multiply two integers
 * @argc:arguement count
 * @argv:arguement vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
