#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to be printed
 * Return: Null
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0';)
		i++;
	j = 0;

	char r[i - 1];

	for (; i > 0; i--)
	{
		r[j] = (s[i - 1]);
		j++;
	}
	s = r;
}
