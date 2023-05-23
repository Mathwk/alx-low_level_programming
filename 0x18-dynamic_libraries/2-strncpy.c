#include "main.h"
/**
 * _strncpy - copy src string of n size to dest
 * @dest: string to be copied to
 * @src: string to copy
 * @n: number of characters to be copied
 *  Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
