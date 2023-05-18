#include "lists.h"
/**
 * free_dlistint - frees memorry of linked list
 * @head: pointer to the linked list
 *
 * Return: nill
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
