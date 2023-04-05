#include "lists.h"
/**
 * free_listint2 - frees link list
 * @head: pointer to linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = *head;
		temp = next->next;
		free(*head);
		*head = temp;
	}
}
