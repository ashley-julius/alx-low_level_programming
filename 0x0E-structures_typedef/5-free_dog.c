/* This program free the memory allocated for struct dog */
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - This function frees the memory allocated to the struct
 *@d: pointer to a struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d->age);
		free(d);
	}
}
