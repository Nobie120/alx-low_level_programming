#include "main.h"

/**
 * cap_string - a function that capitalizes all words
 * @n:The string whose words are capitailized
 * Return:the capitalized words in a string
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;
		if (n[i - 1] == ' ' ||
			n[i - 1] == '\t' ||
			n[i - 1] == '\n' ||
			n[i - 1] == ',' ||
			n[i - 1] == ';' ||
			n[i - 1] == '.' ||
			n[i - 1] == '!' ||
			n[i - 1] == '?' ||
			n[i - 1] == '"' ||
			n[i - 1] == '(' ||
			n[i - 1] == ')' ||
			n[i - 1] == '{' ||
			n[i - 1] == '}' ||
			i == 0)
			n[i] -= 32;
	}
	return (n);
}
