#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * @n: times table number
 *
 * return: no return
 */
void print_times_table(int n)

{
	int a, b, mul;
	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mul = a * b;
				_putchar(44);
				_putchar(32);
				if (mul <=9)
				{
					_putchar(44);
					_putchar(32);

