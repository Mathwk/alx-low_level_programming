#include "main.h"
/**
 * pr_num - prime number check
 * @a: checker
 * @n: number
 * Return: result
 */
int pr_num(int a, int n)
{
	if (a == n)
		return (1);
	else if (n % a == 0 || n < 0)
		return (0);
	return (pr_num(a + 1, n));
}
/**
 * is_prime_number - prime number checker
 * @n: number to be checked
 * Return: 1 for prime 0 other wise
 */
int is_prime_number(int n)
{
	int c;

	c = pr_num(2, n);
	return (c);
}
