#include "lists.h"
/**
  * reverse_listint - reverse elments of a list
  * @head: head of the list
  * Return: adrres of new head after reverse
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != 0)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
