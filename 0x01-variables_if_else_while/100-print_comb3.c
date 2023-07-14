#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < 10)
	{
		while (j < 10)
		{
			if (!(j < i) && !(j == i))
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i == 8 && j == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 1;
		i++;
	}
	return (0);
}
