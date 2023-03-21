#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print content of struct
 * @d: struct to be printed
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
