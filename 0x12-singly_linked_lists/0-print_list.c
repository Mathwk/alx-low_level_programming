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
		_putchar('[');
		if (h->str == NULL)
			_putchar('0');
		else
			_putchar(h->len + '0');
		_putchar(']');
		_putchar(' ');
		if (h->str == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			for (i = 0; h->str[i]; i++)
				_putchar(h->str[i]);
		}
		h = h->next;
		count++;
		_putchar('\n');
	}
	return (count);
}
