#include "lists.h"
/**
 * pop_listint - delete head of a list and return it's value
 * @head : the head of the list
 *Return: the value of the head (int)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *store, *temp;

	if (head == NULL)
		return (0);
	temp = store = *head;
	if (*head)
	{
		i = store->n;
		*head = store->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
