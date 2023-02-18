#include <stdio.h>
/**
 * main - double digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int i;
	int j;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (i = a; i < 10; i++)
			{
				if (a == i)
					j = b + 1;
				else
					j = 0;
				for (; j < 10;)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					if (i != 9 || j != 9 || a != 9 || b != 8)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
