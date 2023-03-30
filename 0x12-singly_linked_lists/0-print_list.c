#include "lists.h"
/**
 * print_list - print content of linked list
 * @h: linked list input
 * Return: number node
 */
size_t print_list(const list_t *h)
{
	int count = 0, i;

	while (h != NULL)
	{
		h = h.next;
		count++;
		_putchar('[');
		if (h.str == NULL)
			_putchar('0');
		else
			_putchar(h.len);
		_putchar(']');
		_putchar(' ');
		if (h.str == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
			break;
		}
		else
		{
			for (i = 0; h.str[i]; i++)
				_putchar(h.str[i]);
		}
		_putchar('\n');
	}
	return (count);
}
