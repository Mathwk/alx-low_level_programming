#include "main.h"
/**
 * mul - multiplication
 * @a: input1
 * @b: input2
 * Return: Always 0
 */
int mul(int a, int b)
{
	int r;
	int c;
	int i;

	c = 0;
	r = a * b;
	for (i = r; i > 0;)
	{
		c++;
		i /= 10;
	}
	for (; c >= 0; c--)
	{
		i = r / 10 ^ c;
		r %= 10 ^ c;
		_putchar('0' + i);
	}
	return (0);
}
