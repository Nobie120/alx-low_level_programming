#include <stdio.h>

/**
 * main - alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char ch;

	ch = 'a';
	for (i = 0; i <= 25; i++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
