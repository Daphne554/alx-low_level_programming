#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if parameter is uppercase
 * @c: input char
 * Return: if uppercase char 1, in other case 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
