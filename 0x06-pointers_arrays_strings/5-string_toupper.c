#include "main.h"
/**
 * string_toupper - change all to upper case
 * @s: string to be changed
 * Return: string
 */
char *string_toupper(char *s)
{
	for (i = 0;; i++)
	{
		if (s[i] == '\0')
			break;
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
	}
	return (s);
}
