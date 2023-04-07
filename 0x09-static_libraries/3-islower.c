#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - check for lower char
 * @c : int to check
 * Return:int value
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
