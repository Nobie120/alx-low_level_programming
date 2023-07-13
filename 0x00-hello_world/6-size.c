#include <stdio.h>

/**
 * main - using sizeof to determine the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %lu\n", sizeof(char));
	printf("size of an int: %lu\n", sizeof(int));
	printf("sizeof a long int: %lu\n", sizeof(long int));
	printf("sizeof a long long int: %lu\n", sizeof(long long int));
	printf("size of an int: %lu\n", sizeof(unsigned int));
	printf("size of a float: %lu\n", sizeof(float));
	return (0);
}
