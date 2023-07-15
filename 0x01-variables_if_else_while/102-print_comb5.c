#include <stdio.h>

/**
 * main - printing all possible combinations of two two-digit numbers
 * return: 0 on success
 */

int main(void)
{
	int i, j;
	int n1, n2, n3, n4;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			n1 = i / 10;
			n2 = i % 10;
			n3 = j / 10;
			n4 = j % 10;

			putchar('0' + n1);
			putchar('0' + n2);
			putchar(' ');
			putchar('0' + n3);
			putchar('0' + n4);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
