#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s:The string to be encoded
 * Return:The result
 */

char *rot13(char *s)
{
	int i, j;
	char *c1 = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *c2 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
				break;
			}
		}
	}
	return (s);
}
