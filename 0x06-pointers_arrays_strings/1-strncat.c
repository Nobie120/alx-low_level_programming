#include "main.h"

/**
 * _strncat - function that concartinates two strings
 * except that it will use at most n bytes from src
 * @src:The string to be concartinated to another string
 * @dest:The result string
 * @n:The bites of src to be used
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *point_dest = dest;
	int i, len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len++] = '\0';
	return (point_dest);
}
