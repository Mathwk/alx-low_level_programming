#include "main.h"
/**
 * flip_bits - number of bits needed to be fliped to match numbers
 * @n: number 1
 * @m: number 2
 * Return: number of bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	for (i = 32; i >= 0; i--)
	{
		if (((n >> i) & 1) ^ ((m >> i) & 1))
			count++;
	}
	return (count);
}
