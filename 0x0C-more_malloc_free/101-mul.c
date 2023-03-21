#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplication of two numbers
 * @argc: argument count
 * @argv: string arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned long int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	if (!isdigit(num1) || !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%lu\n", mul);
}
