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
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (temp == NULL)
	{
		temp = newnode;
		temp->prev = NULL;
		temp->next = NULL;
		return (temp);
	}
	if (idx == 0)
	{
		newnode->next = temp;
		newnode->prev = NULL;
		if (temp != NULL)
			temp->prev = newnode;
		temp = newnode;
		return (temp);
	}
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
