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

	for (j = 0; s[j] != '\0';)
		j++;
	for (i = 0; s[i] != c && i < j;)
		i++;
	if (i < j)
	{
		s = s + i;
		return (s);
	}
	return ('\0');
}
