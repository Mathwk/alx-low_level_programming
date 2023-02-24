#include "main.h"
#include <math.h>
/**
 * print_number - displays numbers back
 * @n: an input
 * Return: Always 0
 */
void print_number(int n)
{
	int i, c, d, r;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	for (c = 0; ; c++)
	{
		if (i / 10 == 0)
			break;
		i /= 10;
	}
	for (; c >= 0; c--)
	{
		if (c != 0)
		{
			r = c;
			d = 1;
			for (; r > 0; r--)
				d *= 10;
		}
		else if (c == 0)
			d = 1;
		_putchar('0' + (n / d));
		n %= d;
	}
}
