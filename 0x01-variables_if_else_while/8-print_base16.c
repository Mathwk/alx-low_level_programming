#include <stdio.h>
/**
 * main - base 16 digits lister
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int A;

	a = 48;
	A = 97;

	while (a < 58)
	{
		putchar((char) a);
		a++;
	}
	while (A < 103)
	{
		putchar((char) A);
		A++;
	}
	putchar('\n');
	return (0);
}
