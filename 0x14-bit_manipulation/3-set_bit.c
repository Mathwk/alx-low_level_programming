#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given location
 * @n: number to be modified
 * @index: location to alter
 * Return: 1 success -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int m = 1;
	unsigned int i;
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = *n;
	for (i = 0; num > 0; i++)
	{
		if (i == index)
		{
			if (num % 2 == 0)
			{
				for (; i > 0; i--)
					m *= 2;
				*n += m;
				return (1);
			}
			else
				return (-1);
		}
		num /= 2;
	}
	if (index > i)
	{
		for (; index > 0; index--)
			m *= 2;
		*n += m;
		return (1);
	}
	return (-1);
}
