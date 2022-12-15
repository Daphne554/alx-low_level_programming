#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if parameter number is 0 to 9
 * @c: input number  
 * Return: 1 if number is between 0 and 9, other case return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
