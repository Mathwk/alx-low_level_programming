#include "main.h"
/**
 * print_times_table -  times table
 *
 *@n: input num
 *
 * Return: Null
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i;
		int j;

		i = n;
		j = n;

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
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
