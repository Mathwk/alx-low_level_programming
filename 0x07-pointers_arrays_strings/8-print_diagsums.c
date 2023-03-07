#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal addition
 * @a: string to be operated
 * @size: size of string
 * Return: Null
 */
void print_diagsums(int *a, int size)
{
	unsigned int s1, s2;
	int i, j, n, c;

	s1 = 0, s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += a[i * (size + 1)];
		s2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
