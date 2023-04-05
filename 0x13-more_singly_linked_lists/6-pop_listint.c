#include "lists.h"
/**
 * pop_listint - deletes head of node from linked list
 * @head: pointer to linked list
 * Return: the deleted head node
 */
int pop_listint(listint_t **head)
{
	int del_node;
	listint_t *temp, *next;

	temp = *head;
	del_node = temp->n;
	next = temp->next;
	free(*head);
	*head = next;
	return (del_node);
}
