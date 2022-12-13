#include <stdio.h>
#include "main.h"

/**
 * _abs - shows absolute value of integer
 *
 * @i: integer input
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
