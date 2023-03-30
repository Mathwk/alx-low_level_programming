#include "lists.h"
/**
 * list_len - print content of linked list
 * @h: linked list input
 * Return: number node
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
