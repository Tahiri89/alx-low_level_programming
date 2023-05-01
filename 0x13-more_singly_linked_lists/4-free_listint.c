#include "lists.h"

/**
 * free_listint - free list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *t_head;

	while (head != NULL)
	{
		t_head = head;
		free(head);
		head = t_head->next;
	}
}
