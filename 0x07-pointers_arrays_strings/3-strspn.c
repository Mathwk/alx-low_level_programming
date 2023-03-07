#include "main.h"
/**
 * _strspn - length of prefix count
 * @s: string to be checked
 * @accept: characters for reference
 * Return: number of similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, a, b, c;

	c = 0;
	for (i = 0; s[i] != '\0';)
		i++;
	for (j = 0; accept[j] != '\0';)
		j++;
	for (a = 0; a <= i; a++)
	{
		for (b = 0; b <= j; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
				return (c);
		}
	}
}
