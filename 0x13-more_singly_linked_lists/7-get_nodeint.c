#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node of linked list
 * @head: pointer to linked list
 * @index: index of the node to be returned
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
		head = head->next;
	return (head);
}
