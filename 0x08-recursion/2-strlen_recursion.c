#include "main.h"
/**
 * _strlen_recursion - prints string
 * @s:string to be printed
 * Return: count
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	_putchar('\0');
	return (1 + _strlen_recursion(s + 1));
}
