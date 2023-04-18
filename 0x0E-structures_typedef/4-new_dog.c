#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name, len_owner;
	dog_t *ndog;
	char *na, *ow;

	len_name = 0;
	for (i = 0; name[i] != '\0'; i++)
		len_name++;
	len_owner = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len_owner++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	na = malloc((len_name + 1) * sizeof(char));
	if (na == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		na[i] = name[i];
	na[i] = '\0';
	ndog->name = na;
	ndog->age = age;
	ow = malloc((len_owner + 1) * sizeof(char));
	if (ow == NULL)
	{
		free(na);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		ow[i] = owner[i];
	ow[i] = '\0';
	ndog->owner = ow;
	return (ndog);
}
