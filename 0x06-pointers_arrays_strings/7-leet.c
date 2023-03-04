#include "main.h"
/**
 * leet - encodes astring into 1337
 * @s: string to be encoded
 * Return: string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	for (; i > 0; i--)
	{
		if (s[i - 1] == 'a' || s[i - 1] == 'A')
			s[i - 1] = '4';
		else if (s[i - 1] == 'e' || s[i - 1] == 'E')
			s[i - 1] = '3';
		else if (s[i - 1] == 'o' || s[i - 1] == 'O')
			s[i - 1] = '0';
		else if (s[i - 1] == 't' || s[i - 1] == 'T')
			s[i - 1] = '7';
		else if (s[i - 1] == 'l' || s[i - 1] == 'L')
			s[i - 1] = '1';
	}
	return (s);
}
