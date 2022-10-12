/* This function initializes a struct variable */
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - This function initializes a stuct variable
 * @d: pointer to dog
 * @name: string literal
 * @age: ordinary int
 * @owner: string literal
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

