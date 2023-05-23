#include "main.h"
/**
 * _strncat -  appends n characters of the second string to the first
 * @dest: the input to be appended upon
 * @src: the input to be appended
 * @n: number of characters to appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; src[j] != '\0';)
		j++;
	if (j < n)
	{
		for (; j >= 0; j--)
			dest[i + j] = src[j];
	}
	else
		for (; n > 0; n--)
			dest[i + n - 1] = src[n - 1];
	return (dest);
}
