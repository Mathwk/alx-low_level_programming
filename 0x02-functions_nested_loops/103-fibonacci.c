#include <stdio.h>
/**
 * main - the first 50 fibonacci that start with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int i;
	long int j;
	long int sum;

	i = 1;
	j = 2;
	sum = 0;

	for (; i <= 4000000;)
	{
		if (i % 2 == 0)
			sum += i;
		else if (j % 2 == 0)
			sum += j;
		i += j;
		j += i;
	}
	printf("%ld\n", sum);
	return (0);
}
