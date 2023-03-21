#include "main.h"

/**
 * _abs - main function
 *
 * @a: integer to make absolute
 * Return: int or int times negative
 *
 */
int _abs(int a)
{
	if (a <= 0)
		return (a * -1);
	else
		return (a);
}
