#include "main.h"
/**
 * print_last_digit - shows the last digit of a nuber
 *
 * @n: input number
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int a;
	int l;

	if (n < 0)
		n = -n;
	a = n / 10;
	l = n - a * 10;

	_putchar('0' + l);

	return (l);
}
