#include "main.h"

/**
 * _strncpy - a fucntion that copies a string
 * @src:points to the string to be copied
 * @dest:The resulting string
 * @n:The bytes of src to be copied
 * Return:The resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
