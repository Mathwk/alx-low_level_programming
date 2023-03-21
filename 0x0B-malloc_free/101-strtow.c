#include "main.h"
/**
 * strtow - word extractor
 * @str: input string
 * Return: a pointer to an array or NULL
 */
char **strtow(char *str)
{
	char **s;
	int a, b, c, i, j;

	if (str == NULL || str == "")
		return (NULL);
	b = 0, c = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == " ")
		{
			if (str[a - 1] == " ")
				continue;
			c++;
		}
		else
			b++;
	}
	s = malloc(sizeof(char) * b + c + 1);
	if (s == NULL)
		return (NULL);
	i = 0, j = 0;
	for (a = 0; str[a] != '\0';)
	{
		if (str[a] == " ")
		{
			if (str[a - 1] == " ")
				a++;
			else
			{
				s[i][j] = '\n';
				a++;
				i++;
			}
			continue;
		}
		else
		{
			s[i][j] = str[a];
			a++;
			j++;
		}
	}
	s[i][j + 1] = '\0';
	return (s);
}
