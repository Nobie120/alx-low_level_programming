#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n:The number
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i =  8; i >= 0; i--)
	{
		if (n & (1 << i))
			printf("1");
		else
			printf("0");
	}
}
