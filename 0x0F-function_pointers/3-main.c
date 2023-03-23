#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - see code
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*s)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = get_op_func(argv[2]);
	if (!s)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	res = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
