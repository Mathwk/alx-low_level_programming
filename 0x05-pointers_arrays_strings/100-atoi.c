#include "main.h"
/**
 * _atoi - number extractor
 * @s: string input
 * Return: null;
 */
int _atoi(char *s)
{
	int a, i, j;

	j = 0;

	for (i = 0; s[i] != [0 - 9])
	{
		if (s[i] == '-')
			j++;
		i++;
	}
	for (a = i; s[i] == [0 - 9];)
		a++;
	a = a - 1;
	strncpy(r1 + i, s, a);
	if (j % 2 == 0)
		s *= -1;
	return (s);
