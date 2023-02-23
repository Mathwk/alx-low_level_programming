#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if ((i * 10) / 100 != 0)
			_putchar('0' + (i * 10) / 100);
		else if (((i * 10) / 10) % 10 != 0)
			_putchar('0' + ((i * 10) / 10) % 10);
		_putchar('0' + (i * 10) % 10);
	_putchar('\n');
}
