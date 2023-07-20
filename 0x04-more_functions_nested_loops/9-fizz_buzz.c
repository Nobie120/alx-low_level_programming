#include <stdio.h>
/**
 * main - print 1-100 but fix if multiple of 3 and buzzfor 5
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else
			printf("%d ", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
