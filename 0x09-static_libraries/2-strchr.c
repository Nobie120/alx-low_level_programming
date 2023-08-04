#include <stddef.h>
#include "main.h"

/**
 * _strchr - function that locates a character
 * @c:The character to be looked for
 * @s:Points to the string where a characyer is searched
 * Return:Pointer to the 1st occurence of the char.NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
