#include "main.h"

/**
 * strtow - function that splits a string into words
 * @s:The string
 * Return:Returns NULL if str == NULL or str == ""
 *
 * wrdcnt - counts words in astring
 * @s:The string to be counted
 */

int wrdcnt(char *s);

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	p = malloc(sizeof(char *) * n);
	if (p == NULL)
		return (NULL);
	p[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			p[wc] = malloc(sizeof(char) * j);
			j--;
			if (p[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(p[k]);
				free(p[n - 1]);
				free(p);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				p[wc][l] = str[i + l];
			p[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (p);
}

/**
 * wrdcnt - counts words in a string
 * @s:strings to be counted
 * Return:Number of words
 */

int wrdcnt(char *s)
{
	int i, j = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}
