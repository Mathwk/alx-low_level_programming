#include "main.h"
/**
 * _strchr - locates character
 * @s: string to be checked
 * @c: a character to be searched
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j;

	for (i = 0; s[i] != c;)
		i++;
	j = i;
	for (; s[i]; i++)
		s[i - j] = s[i];
	return (s);
}
