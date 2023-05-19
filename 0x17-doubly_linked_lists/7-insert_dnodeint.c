#include "lists.h"
/**
 * insert_dnodeint_at_index - inser node at index point
 * @h: pointer to linked list
 * @idx: location of insertion
 * @n: the element to be inserted
 *
 * Return: pointer to the new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	if (temp == NULL)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
