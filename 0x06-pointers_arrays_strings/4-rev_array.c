#include "main.h"
/**
 * reverse_array - reversing the array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, s;

	i = n;
	j = 1;
	while (i > 0)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		s = a[i - 1];
		for (; s / 10 > 0;)
		{
			s /= 10;
			j *= 10;
		}
		s = a[i - 1];
		for (; j >= 1; )
		{
			_putchar('0' + s / j);
			s %= j;
			if (j < 10)
				break;
			j /= 10;
		}
		i--;
	}
	_putchar('\n');
}
