#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a:points to the array to be printed
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
