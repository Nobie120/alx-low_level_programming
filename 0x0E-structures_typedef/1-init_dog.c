#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d:The struct to be initialized
 * @name:Name of the dog
 * @age:The age of the dog
 * @owner:The owner of thr dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(98);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
