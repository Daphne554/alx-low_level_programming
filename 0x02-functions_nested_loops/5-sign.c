#include "main.h"

/**
 * print_sign - prints a sign if equal, greater or less than zero
 *
 * @n: integer input
 *
 * Return: 1 (greater than zero) 0(equal to zero) -1(less tha zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
	}
	_putchar('\n');
}
