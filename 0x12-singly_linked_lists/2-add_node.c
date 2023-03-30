#include "lists.h"
/**
 * add_node - add a new node
 * @head: base node
 * @str: new string to be added
 * Return: the new address
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *temp;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (head);
}
