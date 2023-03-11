#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: Null
 */
void _puts(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	for (j = 0; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
