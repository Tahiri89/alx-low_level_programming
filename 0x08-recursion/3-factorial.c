#include "main.h"

/**
 * factorial - the factorial of integer
 * @n : the integer to calculate the factorial
 * Return :int value
 */ 
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
