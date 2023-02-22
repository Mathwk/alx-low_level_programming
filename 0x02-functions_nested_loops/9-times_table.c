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
		for (j = 0; j <10; j++)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			if (j < 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
