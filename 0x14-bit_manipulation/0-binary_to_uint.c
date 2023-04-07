#include "main.h"
/**
 * binary_to_uint - binary to decimal convertor
 * @b: binary number
 * Return: decimal number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, j, m, count;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1')
			if (b[i] != '0')
				return (0);
		i++;
	}
	count = i;
	for (i = 0; i < count; i++)
	{
		m = 0;
		if (b[i] == '1')
		{
			m = 1;
			for (j = count - i - 1; j > 0; j--)
				m *= 2;
		}
		dec += m;
	}
	return (dec + b[count]);
}
