#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @i: value whose absolute value is being computed
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
		return (i);
	return (0);
}
