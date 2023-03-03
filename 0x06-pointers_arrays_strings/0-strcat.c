#include "main.h"
/**
 * _strcat -  appends the second string to the first
 * @dest: the input to be appended upon
 * @src: the input to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; src[j] != '\0';)
		j++;
	dest[i + j] = src[j];
	return (dest);
}
