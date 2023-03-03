#include "main.h"
/**
 * cap_string - caps first letters
 * @s: string to be manipulated
 * Return: the string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 0;; i++)
	{
		if (s[i] == '\0')
			break;
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] == '\0')
				break;
			for (;; i++)
			{
				if (s[i] >= 'A' && s[i] <= 'Z')
				{
					i++;
					break;
				}
				if (s[i] >= 'a' && s[0] <= 'z')
				{
					s[i] -= 32;
					i++;
					break;
				}
			}
		}
	}
	return (s);
}
