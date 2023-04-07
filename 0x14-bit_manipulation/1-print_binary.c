#include "main.h"
/**
 * print_binary - print binary numbers
 * @n: number to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int start = 0, i;

	for (i = 64; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			start = 1;
		}
		else if (start == 1)
			_putchar('0');
	}
	if (start == 0)
		_putchar('0');
}
