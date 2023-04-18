#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs function
 * @d : dog to free
 */
void free_dog(dog_t *d)
{
		if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
