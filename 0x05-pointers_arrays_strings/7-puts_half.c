#include "main.h"
/**
 * puts_half - prints half the string
 * @str: string to be printed
 * Return: Null
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
