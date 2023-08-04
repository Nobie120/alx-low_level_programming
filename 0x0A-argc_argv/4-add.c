#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two numbers
 * @argc: Arguement count
 * @argv: Arguement vectors
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		j = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += j;
	}
	printf("%d\n", sum);

	return (sum);
}
