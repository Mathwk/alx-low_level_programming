#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at nth place
 * @head: pointer to linked list
 * @index: place where node to be deleted
 * Return: 1 -success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *next;

	if (*head == NULL)
		return (-1);
	temp = *head;
	for (count = 0; temp; count++)
		temp = temp->next;
	if (index > count)
		return (-1);
	if (index == 0)
		*head = (*head)->next;
	else
	{
		next = *head;
		for (count = 1; count < index; count++)
		{
			if (next->next == NULL)
				return (-1);
			next = next->next;
		}
		next->next = next->next->next;
	}
	return (1);
}
