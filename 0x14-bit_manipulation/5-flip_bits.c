#include "main.h"
/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fl, i = 0;

	fl = n ^ m;
	while (fl > 0)
	{
		i += fl & 1;
		fl >>= 1;
	}
	return (i);
}
