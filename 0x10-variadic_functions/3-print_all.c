#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print everythings
 * @format : format that indicate types of arg
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sepa = "";
	va_list printall;

	va_start(printall, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sepa, va_arg(printall, int));
				break;
			case 'i':
				printf("%s%d", sepa, va_arg(printall, int));
				break;
			case 'f':
				printf("%s%f", sepa, va_arg(printall, double));
				break;
			case 's':
				string = va_arg(printall, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", sepa, string);
				break;
			default:
				i++;
				continue;
			}
			sepa = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(printall);
}
