#include <stdio.h>
#include "main.h"

/**
 * _islower - Shows 1 if input is lowercase, other case shows 0.
 *
 * Return: 1 (Success for lowercase) 0 (Success for other)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
}
