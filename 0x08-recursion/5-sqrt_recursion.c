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
	else if (a * a < n)
	{
		a++;
		print_sqrt(a, n);
	}
	else
		return (-1);
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
