#include "main.h"
/**
 * times_table - 9 times table
 *
 * Return: Null
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j > 9)
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
			{
				if (j == 0)
					_putchar('0' + (i * j));
				else
				{
					_putchar(' ');
					_putchar('0' + (i * j));
				}
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
