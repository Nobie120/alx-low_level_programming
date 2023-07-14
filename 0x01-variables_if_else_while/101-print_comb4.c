#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (j > i && k > j)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i == 7 && j == 8 && k == 9)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

