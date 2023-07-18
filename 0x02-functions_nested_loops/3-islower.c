#include "main.h"

/**
 * _islower - check for lower case letters
 * @c: The character that is checked
 *
 * Return:1 if c is a lower case letter
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
