#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	new_s = malloc(sizeof(char) * (len1 + n + 1));
	if (new_s == NULL)
		return (NULL);
	if  n >= len2)
		n = len2;
	for (i = 0; i < len1; i++)
	{
		new_s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		new_s[len1 + i] = s2[i];
	}
	new_s[i + len1] = '\0';
	return (new_s);
}
