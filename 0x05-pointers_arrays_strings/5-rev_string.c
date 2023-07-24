#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:String to be reversed
 */

void rev_string(char *s)
{
	int index, len = 0;
	char str = s[0];

	while (s[len] != '\0')
		len++;

	for (index = 0; index < len; index++)
	{
		len--;
		str = s[index];
		s[index] = s[len];
		s[len] = str;
	}
}
