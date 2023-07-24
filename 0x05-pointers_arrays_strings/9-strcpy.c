#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src:Points the string to be copied
 * @dest:Points where the string is to be copied to
 *
 * Return:the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;
	char *point_dest = dest;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index++] = '\0';
	return (point_dest);
}
