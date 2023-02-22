#include <stdio.h>
/**
 * main - the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum;

	n = 1024;
	sum = 0;
	for (; n > 0; n--)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	return (0);
}
