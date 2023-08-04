#include <stdio.h>

/**
 * main - Prints argc
 * @argc:Arguements count
 * @argv:Arguements vector
 * Return:0 on success
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
