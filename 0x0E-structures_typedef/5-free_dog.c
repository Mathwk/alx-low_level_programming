#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory allocation to dog
 * @d: struct to be freed
 * Retrun: NULL
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	gree(d->owner);
	free(d);
}
