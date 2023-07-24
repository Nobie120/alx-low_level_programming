#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:String to be reversed
 */

void rev_string(char *s)
{
	int index = 0, len = 0;
	char str;

	while (s[index++] != '\0')
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		str = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = str;
	}
}
