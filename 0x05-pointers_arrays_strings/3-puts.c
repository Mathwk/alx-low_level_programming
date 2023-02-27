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
	j = i;
	for (i = 0; i < j; i--)
		_putchar(str[i]);
}
