#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j)
			{
				putcha('0' + i);
				putchar('0' + j);
				putchar(',' + ' ');
			}
		}
	}
		return (0);
}
