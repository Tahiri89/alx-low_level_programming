#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of an array
 *
 * @a : elements of the array to be printed
 * @n : number of element of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(*(a[i]));
		printf(", ");
	}
	printf("\n");
}
