#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, s;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		s = s1[i] - s2[i];
		if (s != 0)
			break;
	}
	return (s);
}
