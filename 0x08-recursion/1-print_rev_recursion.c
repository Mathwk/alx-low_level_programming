#include "main.h"
/**
 * _print_rev_recursion -  prints string
 * @s:string to be printed
 * Return: Null
 */
void _print_rev_recursion(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
		a++;
	for (; a > 0; a--)
		_putchar(s[a - 1]);
}
