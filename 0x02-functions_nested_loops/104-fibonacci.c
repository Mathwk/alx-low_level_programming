#include <stdio.h>
/**
 * main - the first 50 fibonacci that start with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	double i;
	double j;
	int c;

	i = 1;
	j = 2;

	for (c = 0; c < 49;)
	{
		if (c < 48)
			printf("%.0f, %.0f, ", i, j);
		else
			printf("%.0f, %.0f", i, j);
		c++;
		i += j;
		j += i;
	}
	printf("\n");
	return (0);
}
