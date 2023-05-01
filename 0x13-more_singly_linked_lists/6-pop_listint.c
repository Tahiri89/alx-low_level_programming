#include "lists.h"
/**
 * pop_listint - delete head of a list and return it's value
 * @head : the head of the list
 *Return: the value of the head (int)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	value = temp->n;
	free(*head);
	*head = temp->next;
	return (value);
}
