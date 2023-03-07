#include "main.h"
/**
 * _memcpy - replace with constant character
 * @dest: string to be edited
 * @src: a source file to be add
 * @n: amount of b to be repeated
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
