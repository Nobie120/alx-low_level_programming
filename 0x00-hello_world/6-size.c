#include <stdio.h>

/**
 * main - using sizeof to determine the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("sizeof a long int: %lu byte(s)\n", sizeof(long int));
	printf("sizeof a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of an int: %lu byte(s)\n", sizeof(unsigned int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
