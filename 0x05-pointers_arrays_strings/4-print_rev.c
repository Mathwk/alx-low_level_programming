#include "main.h"
/**
 * _puts - prints a string in reverse
 * @s: string to be printed
 * Return: Null
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	for (; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
