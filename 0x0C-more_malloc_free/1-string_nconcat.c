#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - string connector with n characters from s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters form s2
 * Return: new pointer of NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a;
	char *s;

	i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j > n)
		j = n;
	s = malloc(((i + j) * sizeof(*s)) + 1);
	if (s == NULL)
		return ('\0');
	for (a = 0; a < i; a++)
		s[a] = s1[a];
	for (a = 0; a < j; a++)
		s[a + i] = s2[a];
	s[i + j] = '\0';
	return (s);
}
