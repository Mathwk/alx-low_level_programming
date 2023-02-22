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
	int c;

	i = 1;
	j = 2;

	for (c = 0; c < 50;)
	{
		printf("%d, ", i);
		c++;
		printf("%d, ", j);
		c++;
		i += j;
		j += i;
	}
	printf("\n");
	return (0);
}
