#include "main.h"
/**
 * get_endianness - checkes endian if it is big or little
 *
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	char *s = "alx";
	char *p1 = &s[0];
	char *p2 = &s[1];
	size_t i, j;

	i = (size_t)p1;
	j = (size_t)p2;

	if (i < j)
		return (1);
	return (0);
}
