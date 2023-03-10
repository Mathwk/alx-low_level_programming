#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to be printed
 * Return: Null
 */
void rev_string(char *s)
{
	int i, j;
	char r;

	for (i = 0; s[i] != '\0';)
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		r = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = r;
	}
}
