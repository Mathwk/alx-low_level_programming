#include "main.h"
/**
 * swap_int - swap the value of two numbers
 * @a: input 1
 * @b: input 2
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

