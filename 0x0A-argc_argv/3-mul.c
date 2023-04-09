#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - main function
 * @argc: argument counter
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc < 2 || argc > 3)
		printf("Error\n");
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
