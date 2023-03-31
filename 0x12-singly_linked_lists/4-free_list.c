#include "lists.h"
/**
 * free_list - frees memory
 * @head: linked list to be freed
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last
	}
}
