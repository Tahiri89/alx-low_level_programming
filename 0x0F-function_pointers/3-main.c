#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return:void
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && (b == 0))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", result(a, b));
		return (0);
	}
}
