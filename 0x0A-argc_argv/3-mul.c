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
	if (argc >= 0)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
