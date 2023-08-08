#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac:1st arguement
 * @av:2nd arguement
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;
	p = malloc(sizeof(char) * k + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[l] = av[i][j];
			l++;
		}
		if (p[l] == '\0')
			p[l++] = '\n';
	}
	return (p);
}
