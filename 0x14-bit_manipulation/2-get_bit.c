#include "main.h"

/**
 * get_bit - gets bit at given index
 * @n: number to check in it s binary form
 * @index: index of bit to print it s value 0 or 1
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
