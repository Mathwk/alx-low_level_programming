#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14, 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
