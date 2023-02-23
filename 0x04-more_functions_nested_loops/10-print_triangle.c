#include "main.h"
/**
 * print_triangle - draw a triangle with #
 *@size: dimension
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, c;

	c = 0;
	if (n <= 0)
		_putchar('\n');
	for (; n > 0; n--)
	{
		for (j = n; j > 1; j--)
			_putchar(' ');
		c++;
		for (i = 0; i < c; i++)
			_putchar('#');
		_putchar('\n');
	}
}
