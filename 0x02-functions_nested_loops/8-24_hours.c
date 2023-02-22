#include "main.h"
/**
 * jack_bauer - time lister
 *
 * Return: see
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10 && j > 9)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
			}
			else if (i > 9 && j < 10)
			{
				_putchar('0' + i);
				_putchar(':');
				_putchar('0');
			}
			else if (i < 10 && j < 10)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(':');
				_putchar('0');
			}
			else
			{
				_putchar('0' + i);
				_putchar(':');
			}
			_putchar('0' + j);
			_putchar('\n');
		}
	}
	return (0);
}
