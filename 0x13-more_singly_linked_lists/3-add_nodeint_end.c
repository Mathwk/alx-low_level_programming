#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: pointer to linked list
 * @n: node to be added
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (new_node);
}
