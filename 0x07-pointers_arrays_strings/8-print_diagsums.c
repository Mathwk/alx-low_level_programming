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
	int b[size][size];
	int i, j, n, c;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			b[i][j] = a[i * size + j];

	s1 = 0, s2 = 0;
	c = size;
	for (n = 0; n < size;)
	{
		s1 += b[n][n];
		s2 += b[n][c - 1];

		n++;
		c--;
	}
	printf("%d, %d\n", s1, s2);
}
