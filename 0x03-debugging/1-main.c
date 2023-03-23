#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) //i is always zero and no increment !!
	{
		putchar(i);

	}

	printf("Infinite loop avoided! \\o/\n");//this lops will not stop

	return (0);
}
