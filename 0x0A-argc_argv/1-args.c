#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: string arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
		printf("%d\n", argc);
	return (0);
}
