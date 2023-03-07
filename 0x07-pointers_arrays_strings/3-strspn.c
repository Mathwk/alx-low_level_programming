#include "main.h"
/**
 * _strspn - length of prefix count
 * @s: string to be checked
 * @accept: characters for reference
 * Return: number of similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a, b, c, d;

	c = 0;
	for (i = 0; s[i] != '\0';)
		i++;
	for (j = 0; accept[j] != '\0';)
		j++;
	for (a = 0; a < i; a++)
	{
		d = c;
		for (b = 0; b < j; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (c == d)
			break;
	}
	return (c);
}
