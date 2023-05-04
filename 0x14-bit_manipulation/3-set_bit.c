#include "main.h"
#include "2-get_bit.c"

/**
 * set_bit - sets a bit at given index
 * @n: integer to go in it s bibanry form and set at the given index
 *@index: the index in what to set the value
 * Return:success 1 ,faillure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
