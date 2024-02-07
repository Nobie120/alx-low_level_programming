#include "search_algos.h"

/**
 * binary_search - a searching algorithm
 * @array:pointer to the first array element
 * @size:size of the array
 * @value:the value being searched
 *
 * Return: The index of the value
 * or None if value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t r = size - 1;
	size_t l = 0, m, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", *(array + i));
			if (i < r)
				printf(", ");
		}
		printf("\n");
		if (value == *(array + m))
			return ((int)m);
		else if (value < *(array + m))
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
