#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated memory
 * which contains a copy of the string given as a parameter
 * @str:The string to be duplicated
 * Return:returns the duplicate str
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
