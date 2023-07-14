#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - finding the last digit of a large number and comparing
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	srand(time(0));

	int n = rand() - RAND_MAX / 2;

	int ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
