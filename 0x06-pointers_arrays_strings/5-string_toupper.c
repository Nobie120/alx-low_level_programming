#include "main.h"

/**
 * string_toupper -  function that changes all lowercase
 * letters of a string to uppercase.
 * @n:Point the string to be changed to uppercase
 * Return: The resulting upper case string
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
