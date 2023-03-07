#include "main.h"
/**
 * _strchr - locates character
 * @s: string to be checked
 * @c: a character to be searched
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0; s[j] != '\0';)
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
