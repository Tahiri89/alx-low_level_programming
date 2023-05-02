#include "lists.h"
/**
  * reverse_listint - reverse elments of a list
  * @head: head of the list
  * Return: adrres of new head after reverse
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (prev);
}
