#include <stdio.h>

/**
 * main - Printing all Base 16 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;
	char ch;

	for (i = 0; i < 10; i++)
		putchar(i + 48);

	ch = 'a';
	for (n = 0; n < 6; n++)
		putchar(ch++);
	putchar('\n');
	return (0);
}
