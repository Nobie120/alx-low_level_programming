#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a:The contents of the array
 * @n:Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;


	for (i = 0; a[n] != '\0' && i < n; i++)
	{
		j = a[n--];
		a[n--] = a[i];
		a[i] = j;
	}
}
