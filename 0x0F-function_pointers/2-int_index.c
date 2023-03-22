#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search for intiger
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
