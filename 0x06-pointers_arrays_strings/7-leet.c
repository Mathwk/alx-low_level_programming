#include "main.h"
/**
 * leet - encodes astring into 1337
 * @s: string to be encoded
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char *s1, *s2;

	s1 = "aAeEoOtTlL";
	s2 = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}
	return (s);
}
