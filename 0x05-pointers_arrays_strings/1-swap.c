#include <stdio.h>
/**
 * swap_int - swaps integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;

	*a = temp2;
	*b = temp1;
}
