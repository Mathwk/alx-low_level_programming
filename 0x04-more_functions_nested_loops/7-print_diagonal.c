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
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
