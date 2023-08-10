#include "main.h"


/**
 * _memset - function that initializes a variable
 * @s:The variable
 * @n:size
 * @b:value to be put in the variable
 *
 * Return:Pointer to the variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb:Number of elements in the array
 * @size:size of each element
 *
 * Return:pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	return (p);
}
