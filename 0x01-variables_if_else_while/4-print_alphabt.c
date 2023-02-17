#include <stdio.h>
/**
 * main - alphabet lister
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
			putchar((char) a);
		a++;
	}
	putchar('\n');
	return (0);
}
