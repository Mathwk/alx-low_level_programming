#include "lists.h"
/**
 * sum_listint - sum of all nodes in linked list
 * @head: pointer to linked list
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
