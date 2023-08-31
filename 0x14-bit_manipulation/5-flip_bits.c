#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n:Fisrt number
 * @m:Second number
 *
 * Return:Number of bits that were flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int count = 0;

	while (value)
	{
		if (value & 1ul)
			count++;
		value = value >> 1;
	}

	return (count);
}
