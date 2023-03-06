#include "main.h"
/**
 * _memset - replace with constant character
 * @s: string to be edited
 * @b: a constant filler character
 * @n: amount of b to be repeated
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
