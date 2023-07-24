#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a:Pointer to First value to be swapped
 * @b:Pointer to the second value
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
