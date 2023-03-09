#include "main.h"
/**
 * wildcmp - string comparism
 * @s1: string to check
 * @s2: reference checker
 * Return: 1 if true 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*' && *s1 == '\0' && *(s2 + 1) != '\0')
		return (0);
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
