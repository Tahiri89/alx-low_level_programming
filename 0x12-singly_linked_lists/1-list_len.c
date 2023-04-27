#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - list liegnt
 * @h : head node
 * Return:int value lenght
 */

size_t list_len(const list_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
