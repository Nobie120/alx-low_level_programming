#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src:The string to be concatinated
 * @dest:points to where the string is to be concartinated
 * Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *points_dest = dest;
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (points_dest);
}
