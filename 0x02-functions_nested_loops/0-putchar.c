#include <unistd.h>
#include "main.h"

/**
 * main - prints string
 *
 * Return: 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
