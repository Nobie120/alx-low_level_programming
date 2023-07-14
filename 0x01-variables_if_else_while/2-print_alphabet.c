#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase,then new line
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int i = 0;

	while (i <= 25)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}

