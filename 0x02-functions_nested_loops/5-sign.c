#include "main.h"
/**
 * print_sign - shows the sign of a number
 *
 * @n: is th input number
 *
 * Return: 1 for posetive 0 for zero and -1 for negaive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
