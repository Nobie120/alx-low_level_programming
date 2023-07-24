#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s:The string to be converted
 * Return:The integer after conversion
 */

int _atoi(char *s)
{
	int i = 0, sign =  1, result = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result  = result * 10 + (s[i] - '0');
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	return (result * sign);
}


