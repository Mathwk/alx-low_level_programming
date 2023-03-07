#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be analyzed
 * @needle: the string to be searched
 * Return: the searched string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, a, b, c, d;

	for (i = 0; haystack[i] != '\0';)
		i++;
	for (j = 0; needle[j] != '\0';)
		j++;
	for (b = 0; b <= i - j;)
	{
		d = b;
		c = 0;
		a = 0;
		for (; b <= i;)
		{
			if (needle[a] == haystack[b])
			{
				c++;
				if (c == j)
					return (haystack + b - a);
				a++, b++;
				continue;
			}
			else
			{
				b = d + 1;
				break;
			}
		}
	}
	return ("\0");
}
