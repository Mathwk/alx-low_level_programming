#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 *@n: length of line
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, c;

	c = 0;
	for (; n > 0; n--)
	{
		c++;
		for (i = 1; i < c; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
