#include <stdio.h>
/**
 * main - alphabet lister
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 122;

	while (a > 96)
	{
		putchar((char) a);
		a--;
	}
	putchar('\n');
	return (0);
}
