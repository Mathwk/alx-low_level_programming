#include "main.h"
/**
 * _isalpha - check if the input is a letter or not
 *
 * @c: is the input to be checked
 *
 * Return: 1 for letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
