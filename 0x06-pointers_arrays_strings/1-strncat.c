#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - concatenate two strings with n bytes from src
 *
 * @dest : first string
 * @src : string to add to the first
 * @n : n bytes from second string
 *
 * Retunr : char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
