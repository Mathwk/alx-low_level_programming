#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to be printed
 * Return: Null
 */
void rev_string(char *s)
{
	int i, j, c;
	char r;

	for (i = 0; s[i] != '\0';)
		i++;
	c = i;

	for (j = 0; j < i / 2; j++)
	{
		c--;
		r = s[j];
		s[j] = s[c];
		s[c] = s[j];
	}
}
