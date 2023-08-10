#include "main.h"

/**
 * malloc_checked - function tha allocates memory using malloc
 * @b:Bytes of memory to be allocated
 * Return:Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
