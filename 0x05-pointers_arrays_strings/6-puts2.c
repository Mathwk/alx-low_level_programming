#include "main.h"
/**
 * puts2 - prints a string
 * @str: string to be printed
 * Return: Null
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	for (j = 0; j < i / 2; j++)
		_putchar(str[j * 2]);
	_putchar('\n');
}
