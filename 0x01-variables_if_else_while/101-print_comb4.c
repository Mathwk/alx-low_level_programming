#include <stdio.h>
/**
 * main - combo of two disimilar numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		j = i + 1;
		for (; j < 9; j++)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
