#include "lists.h"

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
		
