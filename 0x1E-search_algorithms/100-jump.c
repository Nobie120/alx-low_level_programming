#include "search_algos.h"
/**
 * jump_search - a searching algorithm
 * @array:pointer to the first array's element
 * @size:size of the array
 * @value:The value to be searched
 *
 * Return:rst index where value is located
 * or NULL if no match is found
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, i = 0, max;

	if (!array)
		return (-1);
	jump = (int)(sqrt(size));
	while (*(array + i) < value && i <= (int)(size))
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
		i += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
	max = i;
	i = max - jump;
	while (i <= max && i <= (int)(size - 1))
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
		i++;
	}

	return (-1);
}
