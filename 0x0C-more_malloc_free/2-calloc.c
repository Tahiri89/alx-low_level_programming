#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(nmemb * size));

	if (arr == NULL)
		return (NULL);
	return (arr);
}
