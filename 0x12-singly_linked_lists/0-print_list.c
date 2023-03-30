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
		_putchar(h.len);
		_putchar(']');
		_putchar(' ');
		for (i = 0; h.str[i]; i++)
			_putchar(h.str[i]);
		_putchar('\n');
		h = h.next;
		count++;
	}
	return (count);
}
