#include "main.h"
/**
 * _atoi - number extractor
 * @s: string input
 * Return: null;
 */
int _atoi(char *s)
{
	int a, b, i, j, k;
	unsigned int r;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		if (s[i] == '-')
			j++;
	}

	for (a = i; s[a] >= '0' && s[a] <= '9';)
		a++;

	r = 0;
	for (; i < a; i++)
	{
		k = i;
		b = 1;
		for (; (k + 1) < a; k++)
			b *= 10;
		r += b * (s[i] - 48);
	}
	if (j % 2 != 0)
		r *= -1;
	return (r);
}
