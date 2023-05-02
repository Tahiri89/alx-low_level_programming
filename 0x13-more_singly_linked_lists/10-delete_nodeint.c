#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index of deleted node
 * Return: if succes 1, if not -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
        if (index == 0)
        {
                temp = temp->next;
                free(*head);
                *head = temp;
                return (1);
        }
        else
        {
                while (i != index - 1 && temp != NULL)
                {
                        temp = temp->next;
                        i++;
                }
                if (i != index -1)
		{
			return (-1);
		}
		temp1 = temp->next;
		temp->next = temp->next->next;
		free(temp1);
		return (1);
	}
}
