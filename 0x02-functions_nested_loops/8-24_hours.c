#include "main.h"

/**
 * jack_bauer - Print minutes of the day
 *
 * Return : no return
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				if (a >= 50 && b >= 52)
				_putchar(a);
				_putchar(b);
				_putchar(58);
				_putchar(c);
				_putchar(d);
				_putchar('\n');
			}
		}
	}
}
}
