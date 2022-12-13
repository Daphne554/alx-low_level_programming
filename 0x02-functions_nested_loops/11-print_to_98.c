#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers n to 98
 *
 * @n: number input
 *
 * return: no return
 */
void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ",i);
		}
	}
	else if (n < 98)
	{
		for (i = n; n < 98; n++)
		{
			printf("%d, ",n);
		}
	}
	printf("%d", n);
	putchar('\n');
}
