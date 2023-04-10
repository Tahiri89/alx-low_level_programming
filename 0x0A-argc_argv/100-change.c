#include "main.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	if (atoi(argv[1]) >= 0 || atoi(argv[1]) < 10)
	{
		printf("%d\n", atoi(argv[1]));
	}
	if (atoi(argv[1]) > 10 || atoi(argv[1]) < 20)
	{
		
		
