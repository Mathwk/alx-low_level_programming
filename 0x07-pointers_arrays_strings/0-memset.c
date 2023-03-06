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
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	if (i < n)
		n = i;
	for (; n > 0; n--)
		s[n - 1] = b;
	return (s);
}
