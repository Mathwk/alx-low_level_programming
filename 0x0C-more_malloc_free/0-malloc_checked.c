#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount needed
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
