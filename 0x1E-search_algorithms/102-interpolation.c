#include "search_algos.h"
/**
 * interpolation_search - searching algorithm
 * @array:pointer to the first element of the array
 * @size:size of the array
 * @value:The value to be looked for
 *
 * Return:first index where value is located
 * or -1 if value not found or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = (int)(size - 1), low = 0;
	size_t pos;

	if (!array)
		return (-1);

	while (value >= *(array + low) && value <= *(array + high) && low <= high)
	{

		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int)(pos), *(array + pos));
		if (*(array + pos) == value)
			return (pos);
		else if (*(array + pos) < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", (int)(pos));

	return (-1);
}
