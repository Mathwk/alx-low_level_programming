#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: string arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, c, i;

	if (argc == 2 && atoi(argv[1]) > 0)
	{
		n = atoi(argv[1]);
		i = ((n % 25) % 10) % 5;
		c = n / 25 + (n % 25) / 10 + ((n % 25) % 10) / 5 + i / 2 + i % 2;
		printf("%d\n", c);
	}
	if (argc == 2 && atoi(argv[1]) <= 0)
		printf("0\n");
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
