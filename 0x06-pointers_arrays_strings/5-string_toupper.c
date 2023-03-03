#include "main.h"
/**
 * string_toupper - change all to upper case
 * @str: string to be changed
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
			break;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
	}
	return (str);
}
