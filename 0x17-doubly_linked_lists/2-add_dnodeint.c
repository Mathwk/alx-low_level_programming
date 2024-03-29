#include "lists.h"
/**
 * add_dnodeint - adds a new node at the begining of a linked list
 * @head: pointer to list
 * @n: element to be added
 *
 * Return: pointer to the new link
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	newnode->prev = NULL;
	*head = newnode;
	return (*head);
}
