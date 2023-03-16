#include<stdio.h>
#include<unistd.h>

/**
 * main - Print without printf and pucts
 * Description :the program hase to print a message without printf and puts
 * parameter: i drealy do not describe this
 * 
 * Return : always 1 (Success)
 */
int main(void)
{
	write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1); /* return 1 in success case */
}
