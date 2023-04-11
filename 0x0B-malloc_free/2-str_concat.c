#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1 : fisrt string to add to
 *@s2 :second string to add
 *Return:concated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int s1_size;
	int s2_size;

	i = 0;
	s1_size = 0;
	s2_size = 0;

	if (s2 == NULL)
		return (s1);
	if (s1 == NULL)
		return (s2);
	while (s1[i] != '\0')
	{
		i++;
		s1_size++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		s2_size++;
	}

	s = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < s2_size; i++)
	{
		s[i + s1_size] = s2[i];
	}
	s[i + s1_size] = '\0';
	return (s);
}
