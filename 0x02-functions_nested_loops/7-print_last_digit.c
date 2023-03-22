#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	if (n <= 0)
	{
		n = n * -1;
		_putchar('0' + (n % 10));
		return ((n % 10) * -1);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
