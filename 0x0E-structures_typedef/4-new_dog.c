/* This program function creates a new dog using pointer */
#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - This function creates a new dog using the created struct
 *@name: ordinary char
 *@age: ordinary float
 *@owner: ordinary owner
 *Return: a pointer to a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(dog));
	if (p == NULL)
	{
		return (p);
	}
	else
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
	return (p);
}
