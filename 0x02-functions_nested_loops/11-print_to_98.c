#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers
 *
 * @n: initial num
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 98; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf('\n');
}
