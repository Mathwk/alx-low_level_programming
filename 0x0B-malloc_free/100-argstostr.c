#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: arg count
 * @av: args
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char **s;
	int a, b;

	if (ac == 0 || av == NULL)
		return ('\0');
	s = malloc(sizeof(char *));
	if (s == NULL)
		return ('\0');
	for (a = 0; a < ac; a++)
	{
		s[a] = malloc(sizeof(char) * ac);
		if (s[a] == NULL)
		{
			for (b = a; b >= 0; b--)
				free(s[a]);
			free(s);
			return ('\0');
		}
		return ('\0');
	}
	for (b = 0; b < 1; b++)
	{
		for (a = 0; a < ac; a++)
			s[b][a] = av[a];
	}
	return (*s);
}
