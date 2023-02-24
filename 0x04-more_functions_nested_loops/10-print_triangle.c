#include "main.h"
/**
 * print_triangle - draw a triangle with #
 *@size: dimension
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, c;

	c = 0;
	if (size <= 0)
		_putchar('\n');
	for (; size > 0; size--)
	{
		for (j = size; j > 1; j--)
			_putchar(' ');
		c++;
		for (i = 0; i < c; i++)
			_putchar('#');
		_putchar('\n');
	}
}
