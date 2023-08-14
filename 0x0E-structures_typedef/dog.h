#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - struct describing a dog
 * @name:Nme of thye dog
 * @owner:owner of th dog
 * @age:age of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
