#include "main.h"
/**
 * _strlen - count total string length
 * @s: string to be counted
 * Return: count
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
