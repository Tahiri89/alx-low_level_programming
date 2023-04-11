#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function to create an array of chars
 * @size : size of array
 * @c : charaters
 * Return:char value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
