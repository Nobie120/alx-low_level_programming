#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character checked
 * Return: 1 if upper 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
