#include <stdio.h>

/**
 * main - Printing the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch, sh;
	int i, l;

	ch = 'a';
	i = 0;
	while (i <= 25)
	{
		putchar(ch);
		ch++;
		i++;
	}

	sh = 'A';
	l = 0;
	while (l <= 25)
	{
		putchar(sh);
		sh++;
		l++;
	}
	putchar('\n');
	return (0);
}
