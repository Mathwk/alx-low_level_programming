#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory to ptr
 * @ptr: pointer to previous memory
 * @old_size: size of the old memory
 * @new_size: size of the desired new memory
 * Return: pointer to the new memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *s;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	else if (new_size != old_size)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			s[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (s);
}
