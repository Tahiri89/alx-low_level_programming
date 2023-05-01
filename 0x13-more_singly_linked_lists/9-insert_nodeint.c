#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @idx: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL && i != idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (i != idx - 1 && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
