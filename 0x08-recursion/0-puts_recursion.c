#include "main.h"
/**
 * _puts_recursion - prints string
 * @s:string to be printed
 * Return: Null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return ('\0');
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
