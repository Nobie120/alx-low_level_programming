#include "main.h"

/**
 * _sqrt - Finds squareroot
 * @x:Number whose sqrt is found
 *
 * Return:The sqrt
 */
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * largest_prime_factor - Find Largest prime factor
 * @i:The long number
 */

void largest_prime_factor(long int i)
{
	int prime, largest;

	while (i % 2 == 0)
		i = i / 2;
	for (prime = 3; prime <= _sqrt(i); prime += 2)
	{
		while (i % prime == 0)
		{
			i = i / prime;
			largest = prime;
		}
	}
	if (i > 2)
		largest = i;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
