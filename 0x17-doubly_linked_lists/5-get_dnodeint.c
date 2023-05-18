#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node
 * @head: pointer to list
 * @index: location of the element to return
 *
 * Return: pointer to the location
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
