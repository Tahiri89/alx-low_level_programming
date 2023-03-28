#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
	int i;

	while (i < _strlen(str) - 1)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}