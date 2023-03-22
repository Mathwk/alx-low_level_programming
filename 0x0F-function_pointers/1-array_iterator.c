#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - excutes a function from a give array
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
