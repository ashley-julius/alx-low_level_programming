/* This program prints details of struct dog */
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - This function prints details of dog if not nil
 *@d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0.00)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
