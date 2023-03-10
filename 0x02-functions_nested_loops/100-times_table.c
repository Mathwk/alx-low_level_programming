#include "main.h"
/**
 * print_times_table -  times table
 *@n: input num
 * Return: Null
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j > 99)
				{
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) % 100) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else if (i * j > 9 && i * j < 100)
				{
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + (i * j));
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
