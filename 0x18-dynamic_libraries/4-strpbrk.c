#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: characters for reference
 * Return: the string after the ref
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, a, b;

	for (i = 0; s[i] != '\0';)
		i++;
	for (j = 0; accept[j] != '\0';)
		j++;
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < j; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}
