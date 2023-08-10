#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated with a call to malloc
 * @old_size:size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes of the new memory block
 *
 * Return:the new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old_ptr, *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
