#include "main.h"
/**
 * get_bit - bit at a given location
 * @n: number to check
 * @index: location to check
 * Return: bit at the location or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		if (i == index)
			return (n % 2);
		n /= 2;
	}
	return (-1);
}
