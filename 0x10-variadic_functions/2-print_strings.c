#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: number separator
 * @n: number of arguments
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
