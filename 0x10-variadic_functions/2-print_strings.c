#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings function
 * @separator: seperator char
 * @n: const var
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printstring;
	unsigned int i;
	char *string;

	va_start(printstring, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(printstring, char *);
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
	}
	va_end(printstring);
	printf("\n");
}
