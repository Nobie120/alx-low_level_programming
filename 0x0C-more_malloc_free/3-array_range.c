#include "main.h"

/**
 * array_range - function that creates array of integers
 * @min:start of the array
 * @max:end of the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *p;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = min++;
	return (p);
}
