#include "main.h"
/**
 * _isupper - checks for upper case letters
 * @c: letter input
 * Return: 1 for upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
