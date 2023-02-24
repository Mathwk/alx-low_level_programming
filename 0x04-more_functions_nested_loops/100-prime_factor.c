#include <stdio.h>
/**
 * main - Largest prime factor finder
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n, i;

	n = 612852475143;
	for (i = 2; i < n;)
	{
		if (n % i == 0)
		{
			n /= i;
			continue;
		}
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
