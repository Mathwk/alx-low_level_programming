#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at nth place
 * @head: pointer to linked list
 * @idx: place where new node to be added
 * @n: new node value
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new_node;

	temp = *head;
	for (count = 0; temp; count++)
		temp = temp->next;
	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		temp = *head;
		for (count = 1; count < idx; count++)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
