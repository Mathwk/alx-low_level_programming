#include "main.h"
#include <strlib.h>
/**
 * _calloc - allocate memory to an array
 * @nmemb: array
 * @size: the size of the array for memory allocation
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *a;

	if (nmemb == 0 || size == 0)
		return ('\0');
	a = malloc(nmemb * size);
	if (a == NULL)
		return ('\0');
	for (i = 0; i < nmemb; i++)
		a[i] = 0;
	return (a);
}
