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
	char *s;
	int a, b, i;

	if (ac == 0 || av == NULL)
		return ('\0');
	i = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			i++;
	}
	s = malloc(sizeof(char) * i + ac + 1);
	if (s == NULL)
		return ('\0');
	i = 0;
	for (a = 0; a < ac; a++, i++)
	{
		for (b = 0; av[a][b] != '\0'; b++, i++)
			s[i] = av[a][b];
		s[i] = '\n';
	}
	return (s);
}
