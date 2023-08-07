#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size:size of the array
 * @c:The special character
 * Return:Returns a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
