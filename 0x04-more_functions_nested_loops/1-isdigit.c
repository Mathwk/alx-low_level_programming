#include "main.h"
/**
 * _isdigit - checks fort 
 * @c: input
 * Return: 1 for a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
