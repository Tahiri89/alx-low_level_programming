#include "main.h"
/**
 * reverse_array - function to reverse array
 *
 * @a : the array to reverse
 * @n : number of element of array a
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
