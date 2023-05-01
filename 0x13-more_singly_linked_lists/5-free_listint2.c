#include "lists.h"

/**
 * free_listint2 - free list and set the head to NULL
 * @head: the head of yhe list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
	*head = NULL;
}
