#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of intigers
 * @min: lower int
 * @max: upper int
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max || min < 0)
		return ('\0');
	a = malloc(sizeof(a) * (max - min + 1));
	if (a == NULL)
		return ('\0');
	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}
