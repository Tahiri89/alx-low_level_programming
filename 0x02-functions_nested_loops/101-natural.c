#include <stdio.h>

/**
 * main - multiples of 3 and 5 below 1024
 *
 * Return : always 0
 */
int main(void)
{
	int i;
	int sum_3_5 = 0;

	for (i = 1023; i <= 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum_3_5 = sum_3_5 + i;
			printf(" %d\n", sum_3_5);
		}
	}
	return (0);
}
