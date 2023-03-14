#include "main.h"
#include <stdlib.h>
/**
 * _strdup - string duplicate
 * @str: stringinput
 * Return: new pointer of NULL
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	i = 0;
	while (*str != '\0')
		i++;
	if (i == 0)
		return ('\0');
	s = malloc(i * sizeof(*s));
	if (s == NULL)
		return ('\0');
	for (; i > 0; i--)
		s[i - 1] = str[i - 1];
	return (s);
}
