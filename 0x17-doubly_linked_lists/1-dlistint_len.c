#include "lists.h"
/**
 * dlistint_len - returns number of contents in a doubly linked list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i;

	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	return (i);
}
