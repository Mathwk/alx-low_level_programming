#include "main.h"
/**
 * print_sqrt - print square root
 * @n: number
 * @a: square root
 * Return: result
 */
int print_sqrt(int a, int n)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	return (print_sqrt(a + 1, n));
}
/**
 * _sqrt_recursion - square root of natual number
 * @n: number input
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int c;

	c = print_sqrt(0, n);
	return (c);
}
