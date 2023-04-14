#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - re alloac of memory function
 * @ptr: old memory
 * @old_size: old size of old memory
 * @new_size : new size of new memory
 * Return:void pointer to new reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	ptr = malloc(old_size);

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
