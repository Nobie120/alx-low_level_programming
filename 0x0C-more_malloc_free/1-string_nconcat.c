#include "main.h"

/**
 * string_nconcat - function that concatinates two strings
 * @s1:The first string
 * @n:Number of bytes of s2 to be conctainated with s1
 * @s2:The second string
 *
 * Return:Returns a pointer to the result a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, i, j;
	unsigned int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * ((len + n) + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
		p[i++] = s2[j];

	p[i++] = '\0';
	return (p);
}
