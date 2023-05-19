#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of linked list
 * @head: pointer to the linked list
 * @n: element to add in
 *
 * Return: pointer to the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	return (temp);
}