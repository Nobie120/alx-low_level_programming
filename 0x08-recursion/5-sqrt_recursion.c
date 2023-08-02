#include "main.h"

/**
 * _sqrt_recursion - Finds Natural square root
 * @n: The number
 * @sqrt:The square root
 * Return:Square root
 */

int square(int n, int sqrt);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - Square a number
 * @n:The number whos square root is found
 * @sqrt:The square root
 * Return:Square root
 */

int square(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	else if (sqrt * sqrt < n)
		return (square(n, sqrt + 1));
	else
		return (-1);
}
