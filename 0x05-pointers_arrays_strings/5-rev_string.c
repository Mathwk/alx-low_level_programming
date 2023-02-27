#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to be printed
 * Return: Null
 */
void rev_string(char *s)
{
	int i, j, c;
	char *r;

	r = s;

	for (i = 0; s[i] != '\0';)
		i++;
	c = i;
	r = "dsds";

	for (j = 0; j < i; j++)
	{
		s[j] = c;
		c--;
	}
}
