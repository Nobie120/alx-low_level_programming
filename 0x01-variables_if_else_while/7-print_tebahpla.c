#include <stdio.h>

/**
 * main - printing alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(122 - i);
	}
	putchar('\n');
	return (0);
}
