#include "lists.h"
/**
 * print_dlistint - prints contents of a doubly linked list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
