#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in small case 10 times
 *
 * Returns: Always Null
 */
void print_alphabet_x10(void)
{
	char a;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
