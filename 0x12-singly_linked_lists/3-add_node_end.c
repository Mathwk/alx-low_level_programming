#include "lists.h"
/**
 * add_node_end - add a new node at the end
 * @head: base node
 * @str: new string to be added
 * Return: the new address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *last;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	return (*head);
}
