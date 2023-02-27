#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: Null
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		i++;
	for (; i > 0; i++)
		_putchar(str[j]);
	_putchar('\n');
}
