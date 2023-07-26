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
	int len;

	for (len = 0; src[len] != '\0' && len < n; len++)
		dest[len] = src[len];

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
