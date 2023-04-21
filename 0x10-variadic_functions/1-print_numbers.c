#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers from argument
 * @separator: separator between numbers
 * @n: numbeer of argument (numbers)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argprint;

	va_start(argprint, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(argprint, int));
	}
	va_end(argprint);
	printf("\n");
}
