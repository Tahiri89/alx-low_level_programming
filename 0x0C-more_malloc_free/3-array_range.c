#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	for (i = min; i < max; i++)
		len++;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
