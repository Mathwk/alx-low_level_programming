#include "main.h"
#include <stdlib.h>
/**
 * _strdup - string duplicate
 * @str: stringinput
 * Return: new pointer of NULL
 */
char *_strdup(char *str)
{
	int i, a;
	char *s;

	if (str == NULL)
		return ('\0');
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc((i * sizeof(*s) + 1));
	if (s == NULL)
		return ('\0');
	for (a = 0; a < i; a++)
		s[a] = str[a];
	s[i] = '\0';
	return (s);
}
