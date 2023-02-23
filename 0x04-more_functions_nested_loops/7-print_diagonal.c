#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 *@n: length of line
 * Return: Always 0
 */
void print_diagonal(int n)
{
	for (; n > 0; n--)
	{
		int i;
		int c;

		c = 0;
		c++;
		for (i = 1; i < c; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
