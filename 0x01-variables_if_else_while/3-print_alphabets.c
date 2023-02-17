#include <stdio.h>
/**
 * main - alphabet lister
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int A;

	a = 97;
	A = 65;

	while (a < 123)
	{
		putchar((char) a);
		a++;
	}
	while (A < 91)
	{
		putchar((char) A);
		A++;
	}
	putchar('\n');
	return (0);
}
