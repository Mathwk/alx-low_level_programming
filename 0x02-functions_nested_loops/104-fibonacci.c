#include <stdio.h>
/**
 * main - the first 50 fibonacci that start with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, i1, i2;
	unsigned long int j, j1, j2;
	int c;

	i = 1;
	j = 2;

	for (c = 0; c < 46;)
	{
		printf("%lu, %lu, ", i, j);
		c++;
		i += j;
		j += i;
	}
		i1 = i / 10000000000;
		i2 = i % 10000000000;
		j1 = j / 10000000000;
		j2 = j % 10000000000;
	for (c = 46; c < 49;)
	{
		if (c < 48)
			printf("%lu %lu, %lu%lu, ", i1, i2, j1, j2);
		else
			printf("%lu%lu, %lu%lu", i1, i2, j1, j2);
		c++;
		if (i2 + j2 > 999999999)
		{
			i2 = i2 + j2 - ((i2 + j2) / 10000000000) * 10000000000;
			j2 = j2 + i2 - ((i2 + j2) / 10000000000) * 10000000000;
			i1 = i1 + j1 + (i2 + j2) / 10000000000;
			j1 = j1 + i1 + (i2 + j2) / 10000000000;
		}
		else
		{
			i2 += j2;
			j2 += i2;
			i1 += j1;
			j1 += i1;
		}
	}
	printf("\n");
	return (0);
}
