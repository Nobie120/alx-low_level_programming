#include "main.h"

/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int.
 * @b:pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0, i = 0, len = 0, sum = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	for (i = (len - 1); i >= 0; i--, n++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') << n;
	}
	return (sum);
}
