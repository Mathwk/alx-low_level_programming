#include "main.h"
#include <stdio.h>
/**
 * create_array - replace initial and create an array
 * @size: base string to be edited
 * @c: character to replace the initial character of size
 * Return: a pointer or Null
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(size);
	if (*s == 0)
		return (NULL);
	s[0] = c;
	return (s);
}
