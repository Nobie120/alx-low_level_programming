#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n:The first bytes to be filled
 * @b:The value to be filled
 * @s:points the memory area
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
