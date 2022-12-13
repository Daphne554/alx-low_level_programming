#include "main.h"

/**
 * _isalpha - shows 1 if input is letter and 0 if other
 *
 * @c: ASCII character code
 *
 * Return: 1 (Success for letter) 0 (for other)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
