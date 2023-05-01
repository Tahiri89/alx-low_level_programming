#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *t_head;
	
	while (head != NULL)
	{
		t_head = head;
		free(head);
		t_head->next = head;
	}
}
