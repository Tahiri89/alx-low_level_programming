#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argsum;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(argsum, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argsum, int);
	}
	va_end(argsum);
	return (sum);
}
