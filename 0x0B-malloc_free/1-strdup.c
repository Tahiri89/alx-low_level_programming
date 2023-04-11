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
	int c = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[c] != '\0')
		c++;
	s = malloc(sizeof(char) * c + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str) + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
