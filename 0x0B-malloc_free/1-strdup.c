#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicates strings
 * @str : string to copy (duplicates)
 * Return:char to new duplicate string
 */
char *_strdup(char *str)
{
	char *s;
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str) + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
