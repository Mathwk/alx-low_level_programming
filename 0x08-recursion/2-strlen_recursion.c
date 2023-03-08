#include "main.h"
/**
 * _strlen_recursion - prints string
 * @s:string to be printed
 * Return: count
 */
int _strlen_recursion(char *s)
{
	static int a = 1;

	if (*s != '\0')
	{
		a++;
		_strlen_recursion(s + 1);
	}
		_putchar('\n');
		return (a - 1);
}
