#include "function_pointers.h"

/**
 * f - prints string
 * @s:The string
 */

void f(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		putchar(s[i]);
}
/**
 * print_name - prints name
 * @name :name
 * @f:ffunction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
