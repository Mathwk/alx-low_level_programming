#include "main.h"
#include <stdlib.h>
/**
 * str_concat - string connector
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer of NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return ('\0');
	i = 0, j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
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
