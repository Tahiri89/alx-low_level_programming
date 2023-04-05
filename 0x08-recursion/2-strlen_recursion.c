#include "main.h"

/**
 * _strlen_recursion - give lenght of string
 * @s : string to mesure lenght
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len += 1);
	}
	return (0);
}
