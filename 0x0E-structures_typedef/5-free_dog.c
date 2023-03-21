#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory allocation to dog
 * @d: struct to be freed
 * Retrun: NULL
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	gree(d->owner);
	free(d);
}
