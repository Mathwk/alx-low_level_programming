#include "main.h"
/**
 * sym_check - string symmetry cheker
 * @s: string to checked
 * @a: initial character position
 * @n: final charater position
 * Return: 1 for symetry 0 other wise
 */
int sym_check(char *s, int a, int n)
{
	if (n == a)
		return (1);
	else if (n == a + 1)
		if (s[a] == s[n])
			return (1);
		else if (n > a)
			if (s[a] != s[n])
				return (0);
	return (sym_check(s, a + 1, n - 1));
}

/**
 * _counter - string counter
 * @s: string input
 * Return: number of characters
 */
int _counter(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _counter(s + 1));
}

/**
 * is_palindrome - string symetry checker
 * @s: input strig
 * Return: 1 if true 0 other wise
 */
int is_palindrome(char *s)
{
	int n;

	n = _counter(s);
	return (sym_check(s, 0, n - 1));
}
