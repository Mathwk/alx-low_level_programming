#include "lists.h"
/**
 * free_listint - frees link list
 * @head: pointer to linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head->n = '\0';
		free(head);
		head = temp->next;
	}
}
