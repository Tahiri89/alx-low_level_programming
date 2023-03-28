#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy  - copy string pointed to another pointed
 *
 * @dest: pointer destination
 *@src : pointer source
 * Return: character value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
