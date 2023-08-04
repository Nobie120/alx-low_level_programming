#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c:The value being checked
 * Return: 1 if a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
