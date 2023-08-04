#include <stdio.h>

/**
 * main - Prints argc
 * @argc:Arguements count
 * @argv:Arguements vector
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
