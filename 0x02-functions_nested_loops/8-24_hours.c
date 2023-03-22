#include "main.h"

/**
 * jack_bauer - main thing
 *
 */
void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
		}
	}
}
