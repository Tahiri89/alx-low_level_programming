#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
