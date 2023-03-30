#include "lists.h"
/**
 * _putnum - prints numbers
 * @n: number input
 * Return: nothing
 */
void _putnum(int n)
{
	if (n / 10 != 0)
		_putnum(n / 10);
	_putchar(n % 10 + '0');
}
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
			_putnum(h->len);
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
