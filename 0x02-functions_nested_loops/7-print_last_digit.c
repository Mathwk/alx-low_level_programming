#include "main.h"
/**
 * print_last_digit - shows the last digit of a nuber
 *
 * @n: input number
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = (n - 1) % 10;

	_putchar('1' + a);

	return (a + 1);
}
