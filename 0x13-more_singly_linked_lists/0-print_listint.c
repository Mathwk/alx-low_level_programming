#include "lists.h"
/**
 * print_listint - prints the elements of node
 * @h: pointer to node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
