#include "search_algos.h"

/**
 * linear_search - searches for a vlaue in an array
 * using linear search algorithm
 * @array: The array
 * @size:size of array
 * @value:The value being searched
 *
 * Return:The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
	}

	return (-1);
}
