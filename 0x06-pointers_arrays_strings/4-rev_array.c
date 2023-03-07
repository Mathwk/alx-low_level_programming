#include "main.h"
/**
 * reverse_array - reversing the array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n;
	while (i > 0)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i - 1]);
		i--;
	}
	_putchar('\n');
}
