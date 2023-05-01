#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node from it index
 * @head: the head node
 * @index: index of the node to find
 * Return:the node searched
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;
	while (temp != NULL && i != index)
	{
		temp = temp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (temp);
}
