#include <unistd.h>
/**
 * _putchar - print the chararcter c in the std output
 * @c: char to print
 * Return: succecc 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
