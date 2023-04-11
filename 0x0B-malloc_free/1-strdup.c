#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicates strings
 * @str : string to copy (duplicates)
 * Return:char to new duplicate strong
 */
char *_strdup(char *str)
{
	char *s;
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));

	for (i = 0; i < sizeof(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
