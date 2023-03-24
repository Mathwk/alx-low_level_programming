#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print everything
 * @format: type of argument passed
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	int i = 0, j, k = 0;
	char *s;
	va_list ap;
	const char c[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (c[j])
		{
			if (format[i] == c[j] && k != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), k = 1;
				break;
			case 's':
				s = va_arg(ap, char *), k = 1;
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
