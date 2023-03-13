#include "main.h"
#include <stdlib.h>
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
	if (size == 0)
		return ('\0');
	for (; size > 0; size--)
		s[size - 1] = c;
	return (s);
}
