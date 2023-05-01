#include "lists.h"
/**
 * sum_listint - sum of nodes's value
 *@head: the head node
 * Return: the sum of nodes's data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
