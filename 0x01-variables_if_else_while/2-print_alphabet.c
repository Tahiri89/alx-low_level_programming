#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char ch;
	
	ch = 'a';
	while (ch < 'z')
	putchar("%c\n", ch);
	ch = +ch;
	return (0);
}
