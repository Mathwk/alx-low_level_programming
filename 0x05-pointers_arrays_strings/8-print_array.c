#include "main.h"
#include <stdio.h>
/**
 * print_array - prints half the string
 * @a: array to be printed
 * @n: number of array to be printed
 * Return: Null
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; a[i] != '\0';)
		i++;
	for (j = 0; (j < n || j < i) && (n >= 0); j++)
	{
		printf("%d", a[j]);
		if (j == n - 1 || j == i - 1)
			break;
		printf(", ");
	}
	_putchar('\n');
}
