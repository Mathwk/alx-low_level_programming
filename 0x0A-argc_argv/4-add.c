#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: string arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
