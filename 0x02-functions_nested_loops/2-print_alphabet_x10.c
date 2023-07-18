#include "main.h"
/**
 * print_alphabet_x10 - printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 0;
	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		count++;
	}
}
