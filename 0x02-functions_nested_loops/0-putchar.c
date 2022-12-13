#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: to print
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
