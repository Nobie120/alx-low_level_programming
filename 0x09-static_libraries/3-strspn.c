#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:The string
 * @accept:The prefix substring
 * Return:returns number of bytes of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
