#include "lists.h"
/**
 * listint_len - founction that counts number of elements
 * @h: pointer to linked list
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
