#include "lists.h"

/**
 * add_nodeint -  adding node in the beginin of list
 * @head: the head node
 * @n:value to give to the new node
 * Return:address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
