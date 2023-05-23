#include "main.h"
/**
 * _islower - checks if a letter is lower case or not
 *
 * @c: is the input letter to be determined
 *
 * Return: 1 for lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
