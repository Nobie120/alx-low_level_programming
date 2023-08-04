#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n:Bytes to be coiped
 * @src:Points to the char to be coiped
 * @dest:Points to where it would be copied to
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (p);
}
