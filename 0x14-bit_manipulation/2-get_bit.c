#include "main.h"
/**
 * get_bit - bit at a given location
 * @n: number to check
 * @index: location to check
 * Return: bit at the location or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
