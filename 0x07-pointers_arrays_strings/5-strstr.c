#include "main.h"
/**
 * _comp - compates string
 * @a: string one
 * @b: string two
 * @i: number of character to compare
 * Return: difference
 */
int _comp(char *a, char *b, int i)
{
	int c;

	for (c = 0; c <= i && *a == *b && *a != '\0' && *b != '\0'; c++)
	{
		a++;
		b++;
	}
	return (i - c);
}

/**
 * _strstr - locates a substring
 * @haystack: the string to be analyzed
 * @needle: the string to be searched
 * Return: the searched string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; needle[i] != '\0';)
		i++;
	for (; *haystack != '\0'; haystack++)
	{
		if (_comp(haystack, needle, i) == 0)
			return (haystack);
	}
	return ('\0');
}
