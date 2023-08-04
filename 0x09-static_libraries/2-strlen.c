#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s:Points to the string
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
