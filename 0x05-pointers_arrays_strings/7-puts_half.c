#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of string
 *
 * @str: the string to be used
 */
void puts_half(char *str)
{
	int i;
	int n;

	n = (_strlen(str) - 1) / 2;
	for (i = n + 1; i < _strlen(str); i++)
	{
		if (_strlen(str) % 2 != 0)
		{
			_putchar(*(str + n));
		}
		else
		{
			_putchar(*(str + i));
		}
	}
}
