#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * password_generator - generates random valid passwords for the program 101-crackme.
 */

void password_generator()
{
	int i;
	char password[84];

	srand(time(NULL));
	for (i = 0;i < 84; i++)
	{
		 password[i] = (rand() % 93) + 33;
	}
	password[84] = '\0';
	printf("%s", password);
}
